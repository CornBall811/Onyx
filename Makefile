CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LIBS = -lncurses

# Directories
SRC_DIR = src
INC_DIR = include
BIN_DIR = bin
SAVE_DIR = saves

# Files
SRC = $(wildcard $(SRC_DIR)/*.c)
# Store objects in bin/ with executable to keep tree simple
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o)
TARGET = $(BIN_DIR)/game

.PHONY: all clean setup

all: setup $(TARGET)

# Create folders if they don't exist
setup:
	@mkdir -p $(BIN_DIR)
	@mkdir -p $(SAVE_DIR)

# Link objects into final executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

# Compile .c files into .o files
# This rule now tracks changes in the include folder too
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/*.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BIN_DIR)/*.o $(TARGET)
