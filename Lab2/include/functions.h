//Author: Chase Brown
//Email: cbrown54@nd.edu

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

//this function is used for printing out the array
template<class Type>
void printElem(VECT<Type> theVect) {
    COUT << "Array to test for LIS\t: ";
    if(theVect.size() > 0) { //testing to make sure array is not empty
        for(unsigned int i = 0; i < theVect.size(); i++) { //iterate through position in array
            COUT << theVect.at(i) << " ";
        }
    }
    else {
        COUT << "List is empty";
    }
    COUT << ENDL;
}

//this function is called from the LngIncSeq function
//its purpose is to
template<class Type>
int CeilIndex(VECT<Type> tail, int len, int prev, Type cur) {
    int x = 1 + (prev - 1) / 2;
    if (tail.at(x) >= cur) {
        prev = x;
    }
    else {
        len = x;
    }
    len = len; //this is to make sure the warning for unused varaible 'len' does not
         //trigger a error because of the compiler flags turning warnings >> errors
    return prev;
}

//this function is called to determine the longest increasing subsequence
template<class Type>
int lngIncSeq(VECT<Type> theVect) {
    if (theVect.size() <= 0) { //making sure the vector is not empty
        return 0;
    }
    //creating a second vector to store subsequence
    VECT<Type> tail(theVect.size());
    int length = 1; //this is the counter for the length of the subsequence

    tail.at(0) = theVect.at(0);
    for (unsigned int i = 1; i < theVect.size(); i++) { //iterate through each element it the vector
        if(theVect.at(i) < tail.at(0)) { //this is for finding the lowest possible starting position
            tail.at(0) = theVect.at(i);
        }
        else if (theVect.at(i) > tail.at(length - 1)) { //if it is greater than the previous value in the subsequence
            tail.at(length++) = theVect.at(i); //it will write the value to the subsequence
        }
        else { //checking to see if we should replace the previous value with the current
            tail.at(CeilIndex(tail, -1, length - 1, theVect.at(i))) = theVect.at(i);
        }
    }
    return length;
}


#endif
