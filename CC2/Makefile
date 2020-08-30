# Author: Chase Brown
# E-mail: cbrown54@nd.edu
#
# This is the Makefile for the CSE 20312 - Creativity Challenge 2

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

Fundamental: $(FundamentalObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Fundamental$(FundamentalObjs)
	$(EXE)/./Fundamental

$(OBJ)/Fundamental.o: $(SRC)/Fundamental.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@


# Command: make Quick
QuickObjs := $(OBJ)/Quick.o

Quick: $(QuickObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Quick $(QuickObjs)
	$(EXE)/./Quick

$(OBJ)/Quick.o: $(SRC)/Fundamental.cpp $(INC)/Quick.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# Make all
all: Fundamental Quick

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
