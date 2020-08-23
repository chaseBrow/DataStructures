#include "Pascal.h"
#include "Pascal.cpp"

int main() {
    int size = getTriangleSize();
    COUT << "this is the size: " << size << ENDL;
    int** triangle = buildTriangle(size);

    printTriangle(triangle, size);

    printLocation(triangle);

    //allow user to
    deleteTriangle(triangle, size);
    return 0;
}
