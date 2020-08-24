// Author: Chase Brown
// E-mail: cbrown54@nd.edu
#include "Pascal.h"

//getting the size of the triangle from the user
int getTriangleSize() {
    int size;
    COUT << "How many rows do you want to calculate?";
    CIN >> size;
    return size;
}

//building the triangle with the size specified by the user
int** buildTriangle(int rows) {
    //allocating the memory of the first array to store pointers to other arrays
    long unsigned int sizeOfTri = rows * sizeof(int*);
    int** triangle = (int**)malloc(sizeOfTri);

    for(int x = 0; x < rows; x++) {
        //allocating the size of each array which will hold the values in each row
        long unsigned int sizeOfRow = (x + 1) * sizeof(int);
        int* row = (int*)malloc(sizeOfRow);
        triangle[x] = row;
        for(int y = 0; y <= x; y++) {
            //if it is the first position in the row it will default to '1'
            if(y == 0 || x == 0) {
                triangle[x][y] = 1;
            }
            //for every other position in the row
            else {
                triangle[x][y] = triangle[x][y-1] * (x - y + 1) / y;
            }
        }
    }
    return triangle;
}

//prints the entire triangle
void printTriangle(int** triangle, int rows) {
    //iterates through each row
    for(int x = 0; x < rows; x++) {
        //then iterates through each position in a row
        for(int y = 0; y <= x; y++) {
            COUT << triangle[x][y] << "  ";
        }
        COUT << ENDL;
    }
}

//prints a certain location in the triangle
void printLocation(int** triangle, int rows) {
    //this boolean is 'true' until the user is done printing locations
    bool get = true;
    do {
        char chr;
        int x, y;
        COUT << "Enter a row and a column value to print: ";
        CIN >> x >> y;
        //makes sure the row is valid
        if (0 >= x || x >= rows + 1) {
            COUT << x <<" is not a valid row." << ENDL;
        }
        //then checks to make sure the column is valid
        else if (0 >= y || y >= x + 1) {
            COUT << y << " is not a valid column in row " << x << ENDL;
        }
        //if they are both correct, it prints out the value
        else {
            COUT << triangle[x-1][y-1] << ENDL;
        }

        //checking to see if the user wants to print another location
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

//frees all of the memory from the triangle
void deleteTriangle(int** triangle, int rows) {
    //free the pointer to each row
    for(int x = 0; x < rows; ++x) {
        free(triangle[x]);
    }
    //free the pointer to array of pointers
    free(triangle);
}
