# Author: Chase Brown
# E-mail: cbrown54@nd.edu
#
# This is the Makefile for the CSE 20412 - Lab 04

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

INC := include
SRC := src
OBJ := obj
EXE := exe

# Command: make Lab4
Lab4Objs := $(OBJ)/Lab4.o

MergeInt: $(Lab4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab2 $(Lab4Objs)
	$(EXE)/./Lab4

$(OBJ)/Lab4.o: $(SRC)/Lab4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab4.cpp -o $@


# Command: make MergeInt
MergeIntObjs := $(OBJ)/MergeInt.o

Lab4: $(MergeIntObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MergeInt $(MergeIntObjs)
	$(EXE)/./MergeInt

$(OBJ)/MergeInt.o: $(SRC)/Lab4.cpp $(INC)/MergeInt.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab4.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# Make all
all: Lab4

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
