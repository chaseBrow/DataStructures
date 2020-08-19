#include "Lab1.h"
void printValues(void* reference) {

    COUT << "------------------------------------------" << ENDL;
    COUT << "Initial address of reference:" << reference << ENDL;

    COUT << "Long Unsigned integer is:\t" << *((long unsigned int *)(reference)) << " at address " << reference << ENDL;
    reference += sizeof(long unsigned int);

    COUT << "Float is:\t\t\t" << *((float *)(reference)) << " at address " << reference << ENDL;
    reference += sizeof(float);

    COUT << "Double is:\t\t\t" << *((double *)(reference)) << " at address " << reference << ENDL;
    reference += sizeof(double);

    COUT << "Character is:\t\t\t" << *((char *)(reference)) << " at address " << reference << ENDL;
    COUT << "Final address of reference: " << reference << ENDL;
}

void setUserInput(void* reference, long unsigned int a, float b, double c, char d) {
    //calling and dereferencing the data from its location
    *((long unsigned int *)(reference)) = a;
    //and then moving the size of the printed out variable to locate the next data piece
    reference += sizeof(long unsigned int);
    *((float *)(reference)) = b;
    reference += sizeof(float);
    *((double *)(reference)) = c;
    reference += sizeof(double);
    *((char *)(reference)) = d;
}

int main() {
    //declaring the variables
    long unsigned int lngUnsigInt;
    float flt;
    double dbl;
    char chr;

    //allocating a piece of memory to store my variables
    long unsigned int sizeOfNode = sizeof(long unsigned int) + sizeof(float)+ sizeof(double) + sizeof(char);
    void* node = malloc(sizeOfNode);

    //calling a function from lab.h to retrieve values from the user
    userInput(lngUnsigInt, flt, dbl, chr);

    //passing the values from the user and the void* of the start of our memory
    setUserInput(node, lngUnsigInt, flt, dbl, chr);

    //calls a function to print our values by passing the starting address of our memory
    printValues(node);

    //freeing the memory
    free(node);
    return 0;
}
