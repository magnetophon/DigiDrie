BUILD_DIR = ../build/common

# Where style.json will live at runtime (excluding any DESTDIR staging
# prefix). Set by the top-level Makefile from $(PREFIX)/etc/$(pkgname);
# overridable if invoking this sub-make directly.
SYSCONFDIR ?= /usr/local/etc/magnetophon

CXXFLAGS_COMMON = -Wall -std=c++17 -O3 -fPIC

OBJ := \
	$(BUILD_DIR)/gui/style.o \
	$(BUILD_DIR)/gui/TinosBoldItalic.o \

build: $(OBJ)

# style.cpp's runtime path lookup is configured at compile time via
# MAGNETOPHON_SYSCONFDIR. The shell sees the \" sequences and turns
# them into literal " characters, so g++ sees -DMACRO="value", which
# in turn defines the macro as a C string literal.
$(BUILD_DIR)/gui/style.o : gui/style.cpp
	@mkdir -p $(dir $@)
	g++ $(CXXFLAGS_COMMON) -DMAGNETOPHON_SYSCONFDIR=\"$(SYSCONFDIR)\" -c -o $@ $<

$(BUILD_DIR)/%.o : %.cpp
	@mkdir -p $(dir $@)
	g++ $(CXXFLAGS_COMMON) -c -o $@ $<
