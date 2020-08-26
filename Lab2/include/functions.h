#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <iostream>
#include <string>
#include <stdlib.h> //This is for the random array

#define COUT std::cout
#define ENDL std::endl
#define VECT std::vector
#define STR std::string

template<class Type>
void printElem(VECT<Type> theVect) {
    COUT << "Array to test for LIS\t: ";
    if(theVect.size() > 0) {
        for(unsigned int i = 0; i < theVect.size(); i++) {
            COUT << theVect.at(i) << " ";
        }
    }
    else {
        COUT << "List is empty";
    }
    COUT << ENDL;
}

template<class Type>
int CeilIndex(VECT<Type> theVect, int len, int prev, Type cur) {
    int x = 1 + (prev - 1) / 2;
    if (theVect.at(x) >= cur) {
        prev = x;
    }
    else {
        len = x;
    }
    len = len; //this is to make sure the warning for unused varaible 'len' does not
         //trigger a error because of the compiler flags turning warnings >> errors
    return prev;
}

template<class Type>
int lngIncSeq(VECT<Type> theVect) {
    if (theVect.size() <= 0) {
        return 0;
    }
    VECT<Type> tail(theVect.size());
    int length = 1;

    tail.at(0) = theVect.at(0);
    for (unsigned int i = 1; i < theVect.size(); i++) {
        if(theVect.at(i) < tail.at(0)) {
            tail.at(0) = theVect.at(i);
        }
        else if (theVect.at(i) > tail.at(length - 1)) {
            tail.at(length++) = theVect.at(i);
        }
        else {
            tail.at(CeilIndex(tail, -1, length - 1, theVect.at(i))) = theVect.at(i);
        }
    }
    return length;
}


#endif
