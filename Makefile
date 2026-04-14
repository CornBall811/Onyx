# Variables
CC = gcc
CFLAGS = -Iinclude
LIBS = -lncurses
# This finds all .c files in your src folder automatically
SRC = $(wildcard src/*.c)
# Naming the output
TARGET = bin/game

all: setup $(TARGET)

# Create the bin folder if it doesn't exist
setup:
	@mkdir -p bin
	@mkdir -p saves

# Actual compilation
$(TARGET): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET) $(LIBS)

clean:
	rm -rf bin/
