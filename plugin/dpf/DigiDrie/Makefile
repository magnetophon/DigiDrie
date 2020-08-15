# Project name, used for binaries
NAME = DigiDrie

USER_LIB_PATH ::=

# SIMD related variables.
FILES_SIMD = dsp/dspcore.cpp

OBJ_DIR_SIMD ::= $(addsuffix /simd,../build/$(NAME))

NAME_SIMD ::= $(FILES_SIMD:.cpp=)

OBJ_AVX512 ::= $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .avx512.o,$(NAME_SIMD)))
OBJ_AVX2 ::= $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .avx2.o,$(NAME_SIMD)))
OBJ_SSE41 ::= $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .sse41.o,$(NAME_SIMD)))
OBJ_SSE2 ::= $(addprefix $(OBJ_DIR_SIMD)/,$(addsuffix .sse2.o,$(NAME_SIMD)))

# If CPU doesn't support AVX512, changing order of object file cause illegal instruction.
#
# Same problem on stackoverflow:
# https://stackoverflow.com/questions/15406658/cpu-dispatcher-for-visual-studio-for-avx-and-sse
#
OBJ_SIMD ::= $(OBJ_SSE2) $(OBJ_SSE41) $(OBJ_AVX2) $(OBJ_AVX512)

OBJS_DSP += $(OBJ_SIMD)

# Files to build
FILES_DSP = \
	../lib/vcl/instrset_detect.cpp \
	plugin.cpp \
	parameter.cpp \
	parameter_preset.cpp \

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
simd: mkdir_build $(OBJ_AVX512) $(OBJ_AVX2) $(OBJ_SSE41) $(OBJ_SSE2)

mkdir_build:
	@mkdir -p $(OBJ_DIR_SIMD)/dsp

DPF_INCLUDE_PATH = -I. -I$(DPF_PATH)/distrho -I$(DPF_PATH)/dgl

ifeq ($(DEBUG),true)
SIMD_OPT_FLAG = -g
else
SIMD_OPT_FLAG = -O3
endif

$(OBJ_DIR_SIMD)/%.avx512.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -mavx512f -mfma -mavx512vl -mavx512bw -mavx512dq -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.avx2.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -mavx2 -mfma -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.sse41.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -msse4.1 -std=c++17 -c $< -o$@
$(OBJ_DIR_SIMD)/%.sse2.o: %.cpp
	$(CXX) $(DPF_INCLUDE_PATH) $(SIMD_OPT_FLAG) -fPIC -msse2 -std=c++17 -c $< -o$@
