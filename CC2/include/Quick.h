//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef QUICK_H
#define QUICK_H

#include <vector>
#include <iostream>
#include <string>
#include <algorithm> //Dr. Morrison  said we could include this to shuffle the array
#include <cstdlib> //This if to randomize the array

#define COUT std::cout
#define ENDL std::endl
#define VECT std::vector
#define STR std::string
#define RAND std::random_shuffle
#define SWAP std::swap


//this function is used for printing out the array
template<class Type>
int partition(VECT<Type> & theVect, int left, int right) {
    int low = theVect[left];
    left++;
    while(left <= right) {
        while(theVect[left] < theVect[low]) {
            left++;
        }
        while(theVect[right] > theVect[low]) {
            right--;
        }
        if(left <= right) {
            SWAP(theVect[left], theVect[right]);
            left++;
            right++;
        }
    }
    return left;
}

template<class Type>
void print(VECT<Type> & theVect) {
    for (int i = 0; i < theVect.size(); i++) {
        COUT << theVect.at(i) << ", ";
    }
    COUT << ENDL;
}

template<class Type>
void quickSort(VECT<Type> & theVect, int left, int right) {
    if (left < right) {
        int part = partition(theVect, left, right);
        quickSort(theVect, left, part - 1);
        quickSort(theVect, part + 1, right);
    }
}

#endif
