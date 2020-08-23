#ifndef CREATIVE_H
#define CREATIVE_H

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */
#include <list>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin
#define LIST std::list
#define STR std::string
#define OST std::ostream //this was for trying to setup the friend in class for Lab1c

class Pizza {
    private:
        int crusts;
        int sauces;
        int cheeses;
        int toppings;
        int** crustTri;
        int** sauceTri;
        int** cheeseTri;
        int** toppingTri;

    public:
        Pizza(int crustsVal, int saucesVal, int cheesesVal, int toppingsVal);
            // : crusts(crustsVal), sauces(saucesVal), cheeses(cheesesVal), toppings(toppingsVal) {}

};

// int getTriangleSize();

int** buildTriangle(int rows);

void printTriangle(int** triangle, int rows);

void printLocation(int** triangle);

void deleteTriangle(int** triangle, int rows);

#endif
