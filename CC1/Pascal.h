#ifndef PASCAL_H
#define PASCAL_H

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin
#define OST std::ostream //this was for trying to setup the friend in class for Lab1c
//test
int getTriangleSize();

int** buildTriangle(int rows);

int getLocation(int row, int col);

#endif
