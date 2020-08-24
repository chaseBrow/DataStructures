// Author: Chase Brown
// E-mail: cbrown54@nd.edu
#ifndef CREATIVE_H
#define CREATIVE_H

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin

class Pizza {
    private:
        //declaring the variable for each pizza class
        int crusts;
        int sauces;
        int cheeses;
        int toppings;
        //each of the following are a unique triangle for each part of a pizza
        int** crustTri;
        int** sauceTri;
        int** cheeseTri;
        int** toppingTri;

    public:

        //constructor for Pizza class
        Pizza(int crustsVal, int saucesVal, int cheesesVal, int toppingsVal);

        int printCombination(int chs, int top);

        void deleteTriangles();

};
//same buildTriangle function from Pascal.cpp
int** buildTriangle(int rows);

#endif
