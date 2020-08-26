# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 - Lab 02

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make Lab2
Lab2Objs := $(OBJ)/Lab2.o

Lab2: $(Lab2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab2 $(Lab2Objs)
	$(EXE)/./Lab2

$(OBJ)/Lab2.o: $(SRC)/Lab2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab2.cpp -o $@


# Command: make functions
functionsObjs := $(OBJ)/functions.o

functions: $(functionsObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/functions $(functionsObjs)
	$(EXE)/./functions

$(OBJ)/functions.o: $(SRC)/Lab2.cpp $(INC)/functions.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab2.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir $(OBJ) $(EXE)

# Make all
all: functions

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
