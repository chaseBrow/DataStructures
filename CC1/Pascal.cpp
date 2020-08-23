#include "Pascal.h"

int getTriangleSize() {
    int size;
    COUT << "How many rows do you want to calculate?";
    CIN >> size;
    return size;
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

void printTriangle(int** triangle, int rows) {
    for(int x = 0; x < rows; x++) {
        for(int y = 0; y <= x; y++) {
            COUT << triangle[x][y] << "  ";
        }
        COUT << ENDL;
    }
}

void printLocation(int** triangle, int rows) {
    bool get = true;
    do {
        char chr;
        int x, y;
        COUT << "Enter a row and a column value to print: ";
        CIN >> x >> y;

        if (0 >= x || x >= rows + 1) {
            COUT << x <<" is not a valid row." << ENDL;
        }
        else if (0 >= y || y >= x + 1) {
            COUT << y << " is not a valid column in row " << x << ENDL;
        }
        else {
            COUT << triangle[x-1][y-1] << ENDL;
        }
        COUT << "continue? [y/n]: ";
        CIN >> chr;
        if(chr == 'y') get = true;
        else if(chr == 'n') get = false;
        else {
            COUT << "Invalid character input." << ENDL;
            return;
        }
    } while(get);
}

void deleteTriangle(int** triangle, int rows) {
    for(int x = 0; x < rows; ++x) {
        free(triangle[x]);
    }
    free(triangle);
}
