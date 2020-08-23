#include "Pascal.h"
#include "Pascal.cpp"

int main() {
    int size = getTriangleSize();
    int** triangle = buildTriangle(size);

    printTriangle(triangle, size);

    printLocation(triangle, size);

    deleteTriangle(triangle, size);
    return 0;
}
