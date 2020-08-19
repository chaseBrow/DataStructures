#include "Lab1.h"

class value {
    private:
        long unsigned int lngUnsigInt;
        float flt;
        double dbl;
        char chr;

    public:
        //constructor
        value(long unsigned int lngUnsigIntVal, float fltVal, double dblVal, char chrVal)
            : lngUnsigInt(lngUnsigIntVal), flt(fltVal), dbl(dblVal), chr(chrVal) {
                COUT << "-----------------------------" << ENDL;
    		    COUT << "Initial address of 'this': " << this << ENDL << ENDL;
            }

        //friend print
        friend OST& operator<<(OST& out, const value& printVal) {

            out << "Long Unsigned Int: " << printVal.lngUnsigInt << "\t at address " << &(printVal.lngUnsigInt) << ENDL;
            out << "Float: " << printVal.flt << "\t\t at address " << &(printVal.flt) << ENDL;
            out << "Double: " << printVal.dbl << "\t\t at address " << &(printVal.dbl) << ENDL;
            out << "Character: " << printVal.chr << "\t\t at address " << (void*)&(printVal.chr) << ENDL;

            return out;
        }

};
int main() {
    long unsigned int a;
    float b;
    double c;
    char d;

    //calling my function in the lab1.h file to retrieve values
    userInput(a, b, c, d);

    //passing the values into the constructor
    value value1(a, b, c, d);

    //out putting the ostream from the friend function
    COUT << value1 << ENDL;

    return 0;
}
