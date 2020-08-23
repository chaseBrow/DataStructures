# Author: Chase Brown
# E-mail: cbrown54@nd.edu
#
# This is the Makefile for Creativity Challenge 1

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)


# Command: make Fundamentals
FundamentalObjs :=  Fundamental.o
PascalObjs :=  Pascal.o

Fundamental: Fundamental.o
	$(PP) $(PQCXX) -o Fundamental $(FundamentalObjs)
	./Fundamental

Fundamental.o: Fundamental.cpp
	$(PP) $(PQCXX) -c Fundamental.cpp

Pascal.o: Pascal.cpp
	$(PP) $(PQCXX) -c Pascal.cpp


#Command: make Creative
creativeObjs :=  creative.o
creativePasObjs :=  creativePas.o

creative: creative.o
	$(PP) $(PQCXX) -o creative $(creativeObjs)
	./creative

creative.o: creative.cpp
	$(PP) $(PQCXX) -c creative.cpp

creativePas.o: creativePas.cpp
	$(PP) $(PQCXX) -c creativePas.cpp


# Make all
all: Fundamental creative

# Make clean
clean :
	rm -rf *.o Fundamental Pascal creative creativePas
