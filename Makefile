# File: Makefile
# Author: Christina Hinton
# Makefile for the Linked List example from class.

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=helloWorld

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax:
# target: dependencies
#(tab) system command(s)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp


clean:
	rm *.o *~ $(TARGET)

