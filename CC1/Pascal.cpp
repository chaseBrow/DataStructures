#include "Pascal.h"

int getTriangleSize() {
    int size;
    COUT << "How many rows do you want to calculate?" <<ENDL;
    CIN >> size;
    return size;
}

int** buildTriangle(int rows) {
    long unsigned int sizeOfTri = rows * sizeof(int*);
    int** triangle = (int**)malloc(sizeOfTri);

    for(int x = 0; x < rows; x++) {
        COUT << &triangle[x] << ENDL;
    }

    return triangle;
}
