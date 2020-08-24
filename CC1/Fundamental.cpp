// Author: Chase Brown
// E-mail: cbrown54@nd.edu
#include "Pascal.h"
#include "Pascal.cpp"

int main() {
    //gets the size of the triangle from the user
    int size = getTriangleSize();

    //builds triangle with user specifications
    int** triangle = buildTriangle(size);

    //prints the triangle
    printTriangle(triangle, size);

    //prints location requested by user
    printLocation(triangle, size);

    //frees all of the memory user in the triangle
    deleteTriangle(triangle, size);
    return 0;
}
