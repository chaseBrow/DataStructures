#include "creative.h"

Pizza::Pizza(int crustsVal, int saucesVal, int cheesesVal, int toppingsVal)
    : crusts(crustsVal), sauces(saucesVal), cheeses(cheesesVal), toppings(toppingsVal),
    crustTri(buildTriangle(crustsVal + 1)), sauceTri(buildTriangle(saucesVal + 1)), cheeseTri(buildTriangle(cheesesVal + 1)),
    toppingTri(buildTriangle(toppingsVal + 1)) {}

int Pizza::printCombination(int chs, int top) {
    if (0 >= chs || chs >= this->cheeses + 1) {
        return 0;
    }
    else if (0 >= top || top >= this->toppings + 1) {
        return 0;
    }
    else {
    int chsComb = this->cheeseTri[cheeses][chs];
    int topComb = this->toppingTri[toppings][top];

    int comb = chsComb * topComb * crusts * sauces;
    return comb;
    }

}

void Pizza::deleteTriangles() {
    for(int x = 0; x < rows; ++x) {
        delete[] triangle[x];
    }
    delete[] triangle;
}

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
