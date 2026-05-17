# Project name, used for binaries
NAME = DigiDrie

USER_LIB_PATH :=

# Architecture detection. `uname -m` returns:
#   x86_64 / amd64           on x86_64 Linux / macOS / BSD / MinGW
#   i386 / i686              on 32-bit x86 (vanishingly rare nowadays)
#   arm64                    on Apple Silicon macOS
#   aarch64                  on aarch64 Linux
#
# Only the x86 family has VCL support and SSE/AVX runtime dispatch via
# instrset_detect(); other architectures get a single non-vectorised
# DSPCore_Generic class with no VCL include and no -mavxN flags.
ARCH := $(shell uname -m)
ifeq ($(filter $(ARCH),x86_64 amd64 i386 i686),)
USE_X86_SIMD_DISPATCH := false
else
USE_X86_SIMD_DISPATCH := true
endif

# SIMD related variables.
FILES_SIMD = dsp/dspcore.cpp
OBJ_DIR_SIMD := $(addsuffix /simd,../build/$(NAME))
NAME_SIMD := $(FILES_SIMD:.cpp=)

ifeq ($(USE_X86_SIMD_DISPATCH),true)

OBJ_AVX512 := $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .avx512.o,$(NAME_SIMD)))
OBJ_AVX2 := $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .avx2.o,$(NAME_SIMD)))
OBJ_SSE41 := $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .sse41.o,$(NAME_SIMD)))
OBJ_SSE2 := $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .sse2.o,$(NAME_SIMD)))

# If CPU doesn't support AVX512, changing order of object file cause illegal instruction.
#
# Same problem on stackoverflow:
# https://stackoverflow.com/questions/15406658/cpu-dispatcher-for-visual-studio-for-avx-and-sse
#
OBJ_SIMD := $(OBJ_SSE2) $(OBJ_SSE41) $(OBJ_AVX2) $(OBJ_AVX512)
OBJS_DSP += $(OBJ_SIMD)

# Files to build
FILES_DSP = \
	../lib/vcl/instrset_detect.cpp \
	plugin.cpp \
	parameter.cpp \
	parameter_preset.cpp \

else  # USE_X86_SIMD_DISPATCH

# Non-x86 path: single scalar DSPCore_Generic, no VCL, no instrset_detect.
OBJ_GENERIC := $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .generic.o,$(NAME_SIMD)))
OBJS_DSP += $(OBJ_GENERIC)

FILES_DSP = \
	plugin.cpp \
	parameter.cpp \
	parameter_preset.cpp \

endif  # USE_X86_SIMD_DISPATCH

FILES_UI  = \
	ui.cpp \
	parameter.cpp \
	parameter_preset.cpp \

OBJS_UI = \
	../build/common/gui/style.o \
	../build/common/gui/TinosBoldItalic.o \

# Do some magic
include ../Makefile.plugins.mk

# Enable c++17 and avx2.
ifeq ($(DEBUG),true)
BUILD_CXX_FLAGS += -std=c++17 -g -Wall -Wno-unused-but-set-parameter
else
BUILD_CXX_FLAGS += -std=c++17 -O3 -Wall -Wno-unused-but-set-parameter
endif

# Enable all possible plugin types
LV2 ?= true
VST2 ?= true
JACK ?= true

ifeq ($(JACK)$(HAVE_JACK)$(HAVE_OPENGL),truetruetrue)
TARGETS += jack
endif

ifeq ($(LV2),true)
ifeq ($(HAVE_OPENGL),true)
TARGETS += lv2_sep
else
TARGETS += lv2_dsp
endif
endif

ifeq ($(VST2),true)
TARGETS += vst
endif

# Rule entry point.
all: simd $(TARGETS)

# SIMD rules.
ifeq ($(USE_X86_SIMD_DISPATCH),true)
simd: mkdir_build $(OBJ_AVX512) $(OBJ_AVX2) $(OBJ_SSE41) $(OBJ_SSE2)
else
simd: mkdir_build $(OBJ_GENERIC)
endif

mkdir_build:
	@mkdir -p $(OBJ_DIR_SIMD)/dsp

DPF_INCLUDE_PATH = -I. -I$(DPF_PATH)/distrho -I$(DPF_PATH)/dgl

ifeq ($(DEBUG),true)
SIMD_OPT_FLAG = -g
else
SIMD_OPT_FLAG = -O3
endif

# Pin VCL's INSTRSET per variant so its class-name dispatch
# (DSPCore_SSE2 / DSPCore_SSE41 / DSPCore_AVX2 / DSPCore_AVX512 in
# dspcore.cpp) doesn't depend on which CPU-feature macros the
# compiler predefines for its target triple. Apple clang on
# x86_64-apple-macos defines __SSE4_1__ in its default baseline, so
# without this override the -msse2 compile silently produces a
# second DSPCore_SSE41 instead of DSPCore_SSE2 and plugin.cpp's
# dispatcher fails to link with
#   Undefined symbols: DSPCore_SSE2::DSPCore_SSE2()
# On Linux gcc and MinGW64 gcc the explicit values match what VCL's
# auto-detection in instrset.h already chose, so this is a no-op there.
$(OBJ_DIR_SIMD)/%.avx512.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -mavx512f -mfma -mavx512vl -mavx512bw -mavx512dq -DINSTRSET=10 -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.avx2.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -mavx2 -mfma -DINSTRSET=8 -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.sse41.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -msse4.1 -DINSTRSET=5 -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.sse2.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -msse2 -DINSTRSET=2 -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.generic.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -std=c++17 -c $< -o$@
