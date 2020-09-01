# Author: Chase Brown
# E-mail: cbrown54@nd.edu
#
# This is the Makefile for the CSE 20312 - Lab 03

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

INC := include
SRC := src
OBJ := obj
EXE := exe

# Command: make Lab3
Lab3Objs := $(OBJ)/Lab3.o

Anagram: $(Lab3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab2 $(Lab3Objs)
	$(EXE)/./Lab3

$(OBJ)/Lab3.o: $(SRC)/Lab3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab3.cpp -o $@


# Command: make Anagram
AnagramObjs := $(OBJ)/Anagram.o

Lab3: $(AnagramObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Anagram $(AnagramObjs)
	$(EXE)/./Anagram

$(OBJ)/Anagram.o: $(SRC)/Lab3.cpp $(INC)/Anagram.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab3.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# Make all
all: Lab3

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
