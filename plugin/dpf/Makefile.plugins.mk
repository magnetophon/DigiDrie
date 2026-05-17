#!/usr/bin/make -f
# Makefile for DPF Example Plugins #
# -------------------------------- #
# Created by falkTX
#
# Modified by Takamitsu Endo, 2019.

# NOTE: NAME, FILES_DSP and FILES_UI must have been defined before including this file!

ifeq (,$(DPF_PATH))
ifeq (,$(wildcard ../../Makefile.base.mk))
DPF_PATH=../lib/DPF
else
DPF_PATH=../
endif
endif

include $(DPF_PATH)/Makefile.base.mk

# ---------------------------------------------------------------------------------------------------------------------
# Basic setup

ifeq (,$(TARGET_DIR))
TARGET_DIR = ../bin
endif
ifeq (,$(BUILD_DIR))
BUILD_DIR = ../build/$(NAME)
endif

BUILD_C_FLAGS   += -I.
BUILD_CXX_FLAGS += -I. -I$(DPF_PATH)/distrho -I$(DPF_PATH)/dgl -I$(DPF_PATH)/dgl/src/pugl-upstream/include $(INCLUDE_LIB)

# stdc++fs is a GCC-only artefact: GCC <= 8 needed it to use
# <filesystem>, and GCC >= 9 keeps an empty stub for compatibility.
# Apple clang's libc++ has <filesystem> in the standard library and
# ships no such archive, so passing it there breaks the link with
# "ld: library 'stdc++fs' not found". MinGW64's gcc on Windows behaves
# like Linux gcc and still accepts the flag, so only macOS is excluded.
ifneq ($(MACOS),true)
LINK_FLAGS      += -lstdc++fs
endif

ifeq ($(HAVE_CAIRO),true)
DGL_FLAGS += -DHAVE_CAIRO
endif

ifeq ($(HAVE_OPENGL),true)
DGL_FLAGS += -DHAVE_OPENGL
endif

ifeq ($(HAVE_JACK),true)
BASE_FLAGS += -DHAVE_JACK
endif

ifeq ($(HAVE_LIBLO),true)
BASE_FLAGS += -DHAVE_LIBLO
endif

# ---------------------------------------------------------------------------------------------------------------------
# Set files to build

OBJS_DSP += $(FILES_DSP:%=$(BUILD_DIR)/%.o)
OBJS_UI  += $(FILES_UI:%=$(BUILD_DIR)/%.o)

# Current DPF moves the non-static `getDesktopScaleFactor` definition into a
# separate Objective-C++ source file, so it must be compiled and linked
# explicitly on macOS or the UI fails to link.
ifeq ($(MACOS),true)
OBJS_UI += $(BUILD_DIR)/DistrhoUI_macOS_$(NAME).mm.o
endif

# ---------------------------------------------------------------------------------------------------------------------
# Set plugin binary file targets

jack       = $(TARGET_DIR)/$(NAME)$(APP_EXT)
ladspa_dsp = $(TARGET_DIR)/$(NAME)-ladspa$(LIB_EXT)
dssi_dsp   = $(TARGET_DIR)/$(NAME)-dssi$(LIB_EXT)
dssi_ui    = $(TARGET_DIR)/$(NAME)-dssi/$(NAME)_ui$(APP_EXT)
lv2        = $(TARGET_DIR)/$(NAME).lv2/$(NAME)$(LIB_EXT)
lv2_dsp    = $(TARGET_DIR)/$(NAME).lv2/$(NAME)_dsp$(LIB_EXT)
lv2_ui     = $(TARGET_DIR)/$(NAME).lv2/$(NAME)_ui$(LIB_EXT)
# Current DPF emits VST2 as a proper .vst bundle on macOS (binary at
# Contents/MacOS/<name>, plus Info.plist / PkgInfo / Resources/empty.lproj).
# Most VST2 hosts on Mac (Ableton Live, Bitwig, Cubase, Studio One) refuse
# to load anything that isn't a bundle. Backport the bundle layout here so
# the build emits a host-loadable artifact directly, without a CI wrapping
# step. On Linux and Windows the VST2 plugin is still a single .so/.dll.
ifeq ($(MACOS),true)
vst        = $(TARGET_DIR)/$(NAME).vst/Contents/MacOS/$(NAME)
vstfiles   = $(TARGET_DIR)/$(NAME).vst/Contents/Info.plist \
             $(TARGET_DIR)/$(NAME).vst/Contents/PkgInfo \
             $(TARGET_DIR)/$(NAME).vst/Contents/Resources/empty.lproj
else
vst        = $(TARGET_DIR)/$(NAME)-vst$(LIB_EXT)
vstfiles   =
endif

# CLAP: single .clap file on Linux/Windows (LIB_EXT is implied by being a
# loadable shared library with .clap as the extension); a .clap bundle on
# macOS, paralleling VST2. The .clap binary inside the bundle has no
# extension, matching upstream DPF's CLAP_FILENAME layout.
ifeq ($(MACOS),true)
clap       = $(TARGET_DIR)/$(NAME).clap/Contents/MacOS/$(NAME)
clapfiles  = $(TARGET_DIR)/$(NAME).clap/Contents/Info.plist \
             $(TARGET_DIR)/$(NAME).clap/Contents/PkgInfo \
             $(TARGET_DIR)/$(NAME).clap/Contents/Resources/empty.lproj
else
clap       = $(TARGET_DIR)/$(NAME).clap
clapfiles  =
endif

# VST3 is always a bundle, but the binary path inside it is
# platform-dependent (Linux puts it in Contents/<arch>-linux/, macOS in
# Contents/MacOS/, Windows in Contents/<arch>-win/). DPF's Makefile.base.mk
# computes the correct VST3_BINARY_DIR; reuse it directly rather than
# re-deriving the arch ourselves. Bundle Info.plist / PkgInfo / empty.lproj
# resources only apply on macOS, matching upstream behavior.
ifeq ($(MACOS),true)
vst3       = $(TARGET_DIR)/$(NAME).vst3/$(VST3_BINARY_DIR)/$(NAME)
vst3files  = $(TARGET_DIR)/$(NAME).vst3/Contents/Info.plist \
             $(TARGET_DIR)/$(NAME).vst3/Contents/PkgInfo \
             $(TARGET_DIR)/$(NAME).vst3/Contents/Resources/empty.lproj
else ifeq ($(LINUX),true)
vst3       = $(TARGET_DIR)/$(NAME).vst3/$(VST3_BINARY_DIR)/$(NAME)$(LIB_EXT)
vst3files  =
else ifeq ($(WINDOWS),true)
vst3       = $(TARGET_DIR)/$(NAME).vst3/$(VST3_BINARY_DIR)/$(NAME).vst3
vst3files  =
endif

# AU (AudioUnit) is macOS-only and always a bundle. The bundle's
# Info.plist must carry an AudioComponents array with type / subtype /
# manufacturer / version values that come from the plugin's own
# metadata, so it can't be a simple sed substitution of DPF's template.
# Instead the Makefile builds a host-side 'export' executable from the
# plugin code with -DDISTRHO_PLUGIN_TARGET_EXPORT, then runs it at
# build time to emit the Info.plist (see the rules near the bottom).
# PkgInfo and Resources/empty.lproj reuse the generic bundle-resource
# pattern rules.
ifeq ($(MACOS),true)
au         = $(TARGET_DIR)/$(NAME).component/Contents/MacOS/$(NAME)
aufiles    = $(TARGET_DIR)/$(NAME).component/Contents/Info.plist \
             $(TARGET_DIR)/$(NAME).component/Contents/PkgInfo \
             $(TARGET_DIR)/$(NAME).component/Contents/Resources/empty.lproj
else
au         =
aufiles    =
endif

# ---------------------------------------------------------------------------------------------------------------------
# Handle UI stuff, disable UI support automatically

ifeq ($(FILES_UI),)
UI_TYPE = none
endif

ifeq ($(UI_TYPE),)
UI_TYPE = opengl
endif

ifeq ($(UI_TYPE),cairo)
ifeq ($(HAVE_CAIRO),true)
DGL_FLAGS += $(CAIRO_FLAGS) -DDGL_CAIRO -DHAVE_DGL
DGL_LIBS  += $(CAIRO_LIBS)
DGL_LIB    = $(DPF_PATH)/build/libdgl-cairo.a
HAVE_DGL   = true
else
HAVE_DGL   = false
endif
endif

ifeq ($(UI_TYPE),opengl)
ifeq ($(HAVE_OPENGL),true)
DGL_FLAGS += $(OPENGL_FLAGS) -DDGL_OPENGL -DHAVE_DGL
DGL_LIBS  += $(OPENGL_LIBS)
DGL_LIB    = $(DPF_PATH)/build/libdgl-opengl.a
HAVE_DGL   = true
else
HAVE_DGL   = false
endif
endif

DGL_LIBS += $(DGL_SYSTEM_LIBS)

ifneq ($(HAVE_DGL),true)
dssi_ui =
lv2_ui =
DGL_LIBS =
OBJS_UI =
endif

# TODO split dsp and ui object build flags
BASE_FLAGS += $(DGL_FLAGS)

# ---------------------------------------------------------------------------------------------------------------------
# all needs to be first

all:

# ---------------------------------------------------------------------------------------------------------------------
# Common

$(BUILD_DIR)/%.c.o: %.c
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	@$(CC) $< $(BUILD_C_FLAGS) -c -o $@

$(BUILD_DIR)/%.cc.o: %.cc
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	@$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@

$(BUILD_DIR)/%.cpp.o: %.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	@$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(TARGET_DIR)/$(NAME) $(TARGET_DIR)/$(NAME)-* $(TARGET_DIR)/$(NAME).lv2

# ---------------------------------------------------------------------------------------------------------------------

$(BUILD_DIR)/DistrhoPluginMain_%.cpp.o: $(DPF_PATH)/distrho/DistrhoPluginMain.cpp
	-@mkdir -p $(BUILD_DIR)
	@echo "Compiling DistrhoPluginMain.cpp ($*)"
	@$(CXX) $< $(BUILD_CXX_FLAGS) -DDISTRHO_PLUGIN_TARGET_$* -c -o $@

$(BUILD_DIR)/DistrhoUIMain_%.cpp.o: $(DPF_PATH)/distrho/DistrhoUIMain.cpp
	-@mkdir -p $(BUILD_DIR)
	@echo "Compiling DistrhoUIMain.cpp ($*)"
	@$(CXX) $< $(BUILD_CXX_FLAGS) -DDISTRHO_PLUGIN_TARGET_$* -c -o $@

$(BUILD_DIR)/DistrhoUI_macOS_%.mm.o: $(DPF_PATH)/distrho/DistrhoUI_macOS.mm
	-@mkdir -p $(BUILD_DIR)
	@echo "Compiling DistrhoUI_macOS.mm ($*)"
	@$(CXX) $< $(BUILD_CXX_FLAGS) -ObjC++ -c -o $@

$(BUILD_DIR)/DistrhoPluginMain_JACK.cpp.o: $(DPF_PATH)/distrho/DistrhoPluginMain.cpp
	-@mkdir -p $(BUILD_DIR)
	@echo "Compiling DistrhoPluginMain.cpp (JACK)"
	@$(CXX) $< $(BUILD_CXX_FLAGS) $(shell $(PKG_CONFIG) --cflags jack) -DDISTRHO_PLUGIN_TARGET_JACK -c -o $@

$(BUILD_DIR)/DistrhoUIMain_DSSI.cpp.o: $(DPF_PATH)/distrho/DistrhoUIMain.cpp
	-@mkdir -p $(BUILD_DIR)
	@echo "Compiling DistrhoUIMain.cpp (DSSI)"
	@$(CXX) $< $(BUILD_CXX_FLAGS) $(shell $(PKG_CONFIG) --cflags liblo) -DDISTRHO_PLUGIN_TARGET_DSSI -c -o $@

# ---------------------------------------------------------------------------------------------------------------------
# JACK

jack: $(jack)

ifeq ($(HAVE_DGL),true)
$(jack): $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_JACK.cpp.o $(BUILD_DIR)/DistrhoUIMain_JACK.cpp.o $(DGL_LIB)
else
$(jack): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_JACK.cpp.o
endif
	-@mkdir -p $(shell dirname $@)
	@echo "Creating JACK standalone for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(shell $(PKG_CONFIG) --libs jack) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# LADSPA

ladspa: $(ladspa_dsp)

$(ladspa_dsp): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_LADSPA.cpp.o
	-@mkdir -p $(shell dirname $@)
	@echo "Creating LADSPA plugin for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(SHARED) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# DSSI

dssi:     $(dssi_dsp) $(dssi_ui)
dssi_dsp: $(dssi_dsp)
dssi_ui:  $(dssi_ui)

$(dssi_dsp): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_DSSI.cpp.o
	-@mkdir -p $(shell dirname $@)
	@echo "Creating DSSI plugin library for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(SHARED) -o $@ $(USER_LIB_PATH)

$(dssi_ui): $(OBJS_UI) $(BUILD_DIR)/DistrhoUIMain_DSSI.cpp.o $(DGL_LIB)
	-@mkdir -p $(shell dirname $@)
	@echo "Creating DSSI UI for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(shell $(PKG_CONFIG) --libs liblo) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# LV2

lv2: $(lv2)
lv2_dsp: $(lv2_dsp)
lv2_sep: $(lv2_dsp) $(lv2_ui)

$(lv2): $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_LV2.cpp.o $(BUILD_DIR)/DistrhoUIMain_LV2.cpp.o $(DGL_LIB)
	-@mkdir -p $(shell dirname $@)
	@echo "Creating LV2 plugin for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(SHARED) -o $@ $(USER_LIB_PATH)

$(lv2_dsp): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_LV2.cpp.o
	-@mkdir -p $(shell dirname $@)
	@echo "Creating LV2 plugin library for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(SHARED) -o $@ $(USER_LIB_PATH)

$(lv2_ui): $(OBJS_UI) $(BUILD_DIR)/DistrhoUIMain_LV2.cpp.o $(DGL_LIB)
	-@mkdir -p $(shell dirname $@)
	@echo "Creating LV2 plugin UI for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(SHARED) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# VST

vst: $(vst) $(vstfiles)

ifeq ($(HAVE_DGL),true)
$(vst): $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_VST2.cpp.o $(BUILD_DIR)/DistrhoUIMain_VST2.cpp.o $(DGL_LIB)
else
$(vst): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_VST2.cpp.o
endif
	-@mkdir -p $(shell dirname $@)
	@echo "Creating VST plugin for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(SHARED) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# CLAP

clap: $(clap) $(clapfiles)

ifeq ($(HAVE_DGL),true)
$(clap): $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_CLAP.cpp.o $(BUILD_DIR)/DistrhoUIMain_CLAP.cpp.o $(DGL_LIB)
else
$(clap): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_CLAP.cpp.o
endif
	-@mkdir -p $(shell dirname $@)
	@echo "Creating CLAP plugin for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(SHARED) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# VST3

vst3: $(vst3) $(vst3files)

ifeq ($(HAVE_DGL),true)
$(vst3): $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_VST3.cpp.o $(BUILD_DIR)/DistrhoUIMain_VST3.cpp.o $(DGL_LIB)
else
$(vst3): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_VST3.cpp.o
endif
	-@mkdir -p $(shell dirname $@)
	@echo "Creating VST3 plugin for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) $(SHARED) -o $@ $(USER_LIB_PATH)

# ---------------------------------------------------------------------------------------------------------------------
# AU (AudioUnit, macOS-only)

au: $(au) $(aufiles)

ifeq ($(HAVE_DGL),true)
$(au): $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_AU.cpp.o $(BUILD_DIR)/DistrhoUIMain_AU.cpp.o $(DGL_LIB)
else
$(au): $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_AU.cpp.o
endif
	-@mkdir -p $(shell dirname $@)
	@echo "Creating AU component for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) -framework AudioToolbox -framework AudioUnit -framework CoreFoundation $(SHARED) -o $@ $(USER_LIB_PATH)

# The 'export' tool is the plugin compiled as an executable instead of a
# loadable .dylib. DPF's DistrhoPluginMain.cpp, when built with
# -DDISTRHO_PLUGIN_TARGET_EXPORT, pulls in src/DistrhoPluginExport.cpp
# which provides an int main(). Running ./export NAME from inside a
# bundle's Contents/ directory writes Info.plist there with the AU
# AudioComponents array populated from the plugin's compiled-in
# metadata (getMaker(), getName(), getDescription(), etc).
ifeq ($(HAVE_DGL),true)
$(BUILD_DIR)/export: $(OBJS_DSP) $(OBJS_UI) $(BUILD_DIR)/DistrhoPluginMain_EXPORT.cpp.o $(BUILD_DIR)/DistrhoUIMain_EXPORT.cpp.o $(DGL_LIB)
else
$(BUILD_DIR)/export: $(OBJS_DSP) $(BUILD_DIR)/DistrhoPluginMain_EXPORT.cpp.o
endif
	-@mkdir -p $(shell dirname $@)
	@echo "Creating export tool for $(NAME)"
	@$(CXX) $^ $(BUILD_CXX_FLAGS) $(LINK_FLAGS) $(DGL_LIBS) -o $@ $(USER_LIB_PATH)

# Explicit rule for the AU bundle's Info.plist that overrides the
# generic $(TARGET_DIR)/%/Contents/Info.plist pattern. GNU Make prefers
# explicit rules over pattern rules, so VST2 / VST3 / CLAP bundles
# still get the sed-substituted template while .component uses this.
ifeq ($(MACOS),true)
$(TARGET_DIR)/$(NAME).component/Contents/Info.plist: $(BUILD_DIR)/export
	-@mkdir -p $(shell dirname $@)
	@echo "Generating AU Info.plist for $(NAME)"
	@cd $(TARGET_DIR)/$(NAME).component/Contents && $(abspath $<) "$(NAME)"
endif

# ---------------------------------------------------------------------------------------------------------------------
# macOS .vst bundle resources
#
# Pattern-match against $(TARGET_DIR)/<bundle-name>/Contents/... so the same
# rules would also serve future .vst3 / .component bundles if we add AU/VST3
# later. The Info.plist's @INFO_PLIST_PROJECT_NAME@ token gets substituted
# with the project name; the bundle ID prefix is rewritten from upstream's
# generic studio.kx.distrho.* to com.magnetophon.* so hosts that already
# know v0.2.0's bundle ID don't see this as a separate plugin.
ifeq ($(MACOS),true)
$(TARGET_DIR)/%/Contents/Info.plist: $(DPF_PATH)/utils/plugin.bundle/Contents/Info.plist
	-@mkdir -p $(shell dirname $@)
	@sed -e 's/@INFO_PLIST_PROJECT_NAME@/$(NAME)/' \
	     -e 's|studio\.kx\.distrho|com.magnetophon|' $< > $@

$(TARGET_DIR)/%/Contents/PkgInfo: $(DPF_PATH)/utils/plugin.bundle/Contents/PkgInfo
	-@mkdir -p $(shell dirname $@)
	@cp $< $@

$(TARGET_DIR)/%/Contents/Resources/empty.lproj: $(DPF_PATH)/utils/plugin.bundle/Contents/Resources/empty.lproj
	-@mkdir -p $(shell dirname $@)
	@cp $< $@
endif

# ---------------------------------------------------------------------------------------------------------------------

-include $(OBJS_DSP:%.o=%.d)
ifeq ($(HAVE_DGL),true)
-include $(OBJS_UI:%.o=%.d)
endif

-include $(BUILD_DIR)/DistrhoPluginMain_JACK.cpp.d
-include $(BUILD_DIR)/DistrhoPluginMain_LADSPA.cpp.d
-include $(BUILD_DIR)/DistrhoPluginMain_DSSI.cpp.d
-include $(BUILD_DIR)/DistrhoPluginMain_LV2.cpp.d
-include $(BUILD_DIR)/DistrhoPluginMain_VST.cpp.d

-include $(BUILD_DIR)/DistrhoUIMain_JACK.cpp.d
-include $(BUILD_DIR)/DistrhoUIMain_DSSI.cpp.d
-include $(BUILD_DIR)/DistrhoUIMain_LV2.cpp.d
-include $(BUILD_DIR)/DistrhoUIMain_VST.cpp.d

# ---------------------------------------------------------------------------------------------------------------------
