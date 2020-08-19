#include "Lab1.h"
struct Value {
    //Members
    long unsigned int lngUnsigInt;
    float flt;
    double dbl;
    char chr;

    //Constructor
    Value(long unsigned int lngUnsigIntVal, float fltVal, double dblVal, char chrVal)
        : lngUnsigInt(lngUnsigIntVal), flt(fltVal), dbl(dblVal), chr(chrVal) {}

    //Accessor
    void printValues() {
        COUT << "-----------------------------" << ENDL;
		COUT << "Initial address of 'this': " << this << ENDL << ENDL;

		COUT << "Long Unsigned Int:  " << this->lngUnsigInt << "\t at address " << &(this->lngUnsigInt) << ENDL;
		COUT << "Float:  " << this->flt << "\t\t\t at address " << &(this->flt)<< ENDL;
		COUT << "Double:  " << this->dbl << "\t\t at address " << &(this->dbl) << ENDL;
        COUT << "Character:  " << this->chr << "\t\t\t at address " << (void*)&(this->chr) << ENDL;
    }

};

int main () {
    //calling the constructor
    Value value(value.lngUnsigInt, value.flt, value.dbl, value.chr);

    //calling a function from lab1.h to retrieve the values from the user and write them to the class object
    userInput(value.lngUnsigInt, value.flt, value.dbl, value.chr);

    //calling the printValues function from the class Object
    value.printValues();
    return 0;
}
