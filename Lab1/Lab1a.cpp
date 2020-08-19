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
    *((long unsigned int *)(reference)) = a;
    reference += sizeof(long unsigned int);
    *((float *)(reference)) = b;
    reference += sizeof(float);
    *((double *)(reference)) = c;
    reference += sizeof(double);
    *((char *)(reference)) = d;
}

int main() {
    long unsigned int lngUnsigInt;
    float flt;
    double dbl;
    char chr;

    long unsigned int sizeOfNode = sizeof(long unsigned int) + sizeof(float)+ sizeof(double) + sizeof(char);
    void* node = malloc(sizeOfNode);


    userInput(lngUnsigInt, flt, dbl, chr);
    setUserInput(node, lngUnsigInt, flt, dbl, chr);
    printValues(node);

    free(node);
    return 0;
}
