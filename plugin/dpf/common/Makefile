BUILD_DIR = ../build/common

OBJ ::= \
	$(BUILD_DIR)/gui/style.o \
	$(BUILD_DIR)/gui/TinosBoldItalic.o \

build: $(OBJ)

$(BUILD_DIR)/%.o : %.cpp
	@mkdir -p $(dir $@)
	g++ -Wall -std=c++17 -O3 -fPIC -c -o $@ $< -lstdc++fs
