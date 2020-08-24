// Author: Chase Brown
// E-mail: cbrown54@nd.edu
#include "creative.h"

//constructor for the Pizza Class
//each Pascal Triangle is built in the constructor through the 'buildTriangle' function
Pizza::Pizza(int crustsVal, int saucesVal, int cheesesVal, int toppingsVal)
    : crusts(crustsVal), sauces(saucesVal), cheeses(cheesesVal), toppings(toppingsVal),
    crustTri(buildTriangle(crustsVal + 1)), sauceTri(buildTriangle(saucesVal + 1)), cheeseTri(buildTriangle(cheesesVal + 1)),
    toppingTri(buildTriangle(toppingsVal + 1)) {}

//get combinations function for each Pizza class
int Pizza::printCombination(int chs, int top) {
    //if the user wants more cheese than the pizza joint offers
    if (0 >= chs || chs >= this->cheeses + 1) {
        return 0;
    }
    //if the user wants more toppings than the pizza joint offers
    else if (0 >= top || top >= this->toppings + 1) {
        return 0;
    }

    else {
        int chsComb = this->cheeseTri[cheeses][chs]; //gets the location in the Pascals triangle
        int topComb = this->toppingTri[toppings][top];
        //multiplies the combinations of each segment to find the total combinations
        int comb = chsComb * topComb * crusts * sauces;
        return comb;
    }

}

//function for freeing the memory of each Pizza Class
//there are 4 triangles for each class
void Pizza::deleteTriangles() {
    for(int x = 0; x < crusts + 1; ++x) {
        free(crustTri[x]);
    }
    free(crustTri);
    for(int x = 0; x < cheeses + 1; ++x) {
        free(cheeseTri[x]);
    }
    free(cheeseTri);
    for(int x = 0; x < sauces + 1; ++x) {
        free(sauceTri[x]);
    }
    free(sauceTri);
    for(int x = 0; x < toppings + 1; ++x) {
        free(toppingTri[x]);
    }
    free(toppingTri);
}

//this is the exact same buildTriangle function from my Pascal.cpp
int** buildTriangle(int rows) {
    long unsigned int sizeOfTri = rows * sizeof(int*);
    int** triangle = (int**)malloc(sizeOfTri);

    for(int x = 0; x < rows; x++) {
        long unsigned int sizeOfRow = (x + 1) * sizeof(int);
        int* row = (int*)malloc(sizeOfRow);
        triangle[x] = row;
        for(int y = 0; y <= x; y++) {
            if(y == 0 || x == 0) {
                triangle[x][y] = 1;
            }
            else {
                triangle[x][y] = triangle[x][y-1] * (x - y + 1) / y;
            }
        }
    }
    return triangle;
}
