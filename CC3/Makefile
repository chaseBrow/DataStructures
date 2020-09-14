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

# Command: make Fundamental
FundamentalObjs := $(OBJ)/Fundamental.o

LinearProbe: $(FundamentalObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab2 $(FundamentalObjs)
	$(EXE)/./Fundamental

$(OBJ)/Fundamental.o: $(SRC)/Fundamental.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@


# Command: make LinearProbe
LinearProbeObjs := $(OBJ)/LinearProbe.o

Fundamental: $(LinearProbeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/LinearProbe $(LinearProbeObjs)
	$(EXE)/./LinearProbe

$(OBJ)/LinearProbe.o: $(SRC)/Fundamental.cpp $(INC)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# Make all
all: Fundamental

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
