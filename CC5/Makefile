# Author: Chase Brown
# This is the Makefile for the CSE 20312 - CC4

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make PQTest
PQTestObjs := $(OBJ)/PQTest.o

PriorityQueue: $(PQTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PQTest $(PQTestObjs)
	$(EXE)/./PQTest

$(OBJ)/PQTest.o: $(SRC)/PQTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/PQTest.cpp -o $@

PriorityQueueObjs := $(OBJ)/PriorityQueue.o

PQTest: $(PriorityQueueObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PriorityQueue $(PriorityQueueObjs)
	$(EXE)/./PriorityQueue

$(OBJ)/PriorityQueue.o: $(SRC)/PQTest.cpp $(INC)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/PQTest.cpp -o $@



# Command: make Prob2
Prob2Objs := $(OBJ)/Prob2.o

Prob2h: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@

Prob2hObjs := $(OBJ)/Prob2h.o

Prob2: $(Prob2hObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2h $(Prob2hObjs)
	$(EXE)/./Prob2h

$(OBJ)/Prob2h.o: $(SRC)/Prob2.cpp $(INC)/Prob2h.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@



# Make all
all: Prob2 PQTest


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
