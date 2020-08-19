# Author: Chase Brown
# E-mail: cbrown54@nd.edu
#
# This is the Makefile for Lecture 02 - Part 2

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)



# Command: make Lab1a
Lab1aObjs :=  Lab1a.o

Lab1a: Lab1a.o
	$(PP) $(CXXFLAGS) -o Lab1a $(Lab1aObjs)
	./Lab1a

Lab1a.o: Lab1a.cpp
	$(PP) $(CXXFLAGS) -c Lab1a.cpp


# Command: make Lab1b
Lab1bObjs :=  Lab1b.o

Lab1b: Lab1b.o
	$(PP) $(PQCFLAGS) -o Lab1b $(Lab1bObjs)
	./Lab1b

Lab1b.o: Lab1b.cpp
	$(PP) $(PQCFLAGS) -c Lab1b.cpp


# Command: make Lab1c
Lab1cObjs :=  Lab1c.o

Lab1c: Lab1c.o
	$(PP) $(PQCXX) -o Lab1c $(Lab1cObjs)
	./Lab1c

Lab1c.o: Lab1c.cpp
	$(PP) $(PQCXX) -c Lab1c.cpp



# Make all
all: Lab1a Lab1b Lab1c

# Make clean
clean :
	rm -rf *.o Lab1a Lab1b Lab1c
