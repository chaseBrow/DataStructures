#ifndef CREATIVE_H
#define CREATIVE_H

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */
#include <list>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin

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

        int printCombination(int chs, int top);

        void deleteTriangles();

};

int** buildTriangle(int rows);

#endif
