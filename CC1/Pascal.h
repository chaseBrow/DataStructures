// Author: Chase Brown
// E-mail: cbrown54@nd.edu
#ifndef PASCAL_H
#define PASCAL_H

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin

//getting the size of the triangle from the user
int getTriangleSize();

//allocating memory and building the triangle
int** buildTriangle(int rows);

//prints the entire triangle
void printTriangle(int** triangle, int rows);

//asks the user for a specific location and prints it
void printLocation(int** triangle);

//freeing the memory of the triangle
void deleteTriangle(int** triangle, int rows);

#endif
