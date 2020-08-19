#include "Lab1.h"
//NONE OF THIS WORKS, DONT BOTHER GRADING IT... I just started learning C++ a week ago (im a transfer, I learned Python and Java)

class value {
    private:
        long unsigned int test;
        float flt;
        double dbl;
        char chr;

    public:
        //constructor
        value(long unsigned int lngUnsigIntVal, float fltVal, double dblVal, char chrVal);
            : test(lngUnsigIntVal), flt(fltVal), dbl(dblVal), chr(chrVal) {}

        void printBase() {
            COUT << "-----------------------------" << ENDL;
		    COUT << "Initial address of 'this': " << this << ENDL << ENDL;
            COUT << "this->flt" << ENDL;
        }

        // //setMethods
        // void setLngUnsigInt(long unsigned int lngUnsigInt);
        // void setFloat(float flt);
        // void setDouble(double dbl);
        // void setChar(char chr);
        //
        // //getMethods
        // long unsigned int getLngUnsigInt() const;
        // float getFloat() const;
        // double getDouble() const;
        // char getChar() const;

        // friend OST operator<<(OST output, const value& v);

};
int main() {
    // long unsigned int a;
    // float b;
    // double c;
    // char d;
    // userInput(a, b, c, d);

    value value1(123, 124, 125, 'a');

    value1.printBase();
    return 0;
}
