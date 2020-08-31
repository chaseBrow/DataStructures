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

//this method simply iterates through each value in the Vector and prints it
template<class Type>
void print(VECT<Type> & theVect) {
    for (int i = 0; i < theVect.size(); i++) {
        COUT << theVect.at(i) << ", ";
    }
    COUT << ENDL;
}

//this is the method which creates partitions or branches as we progress
//through the quick sort algo
template<class Type>
int partition(VECT<Type> & theVect, int left, int right) {
    int low = left; //we are setting the low val or pivot point
    while(left <= right) { //do this until the left and right value cross
        while(theVect.at(left) < theVect.at(low)) { //increment until the left val is greater than the low/pivot
            left++;
        }
        while(theVect.at(right) > theVect.at(low)) { //decrement until the right val is less than the low/pivot
            right--;
        }
        if(left <= right) { //if the right is greater than the left, swap the values
            SWAP(theVect.at(left), theVect.at(right));
            left++;
            right--;
        }
    }
    return left;
}

template<class Type>
void quickSort(VECT<Type> & theVect, int left, int right) {
    if (left < right) {
        int part = partition(theVect, left, right);
        //this is the recursive portion where another instance of the quick sort method is called
        quickSort(theVect, left, part - 1); //this is the branch left or to the lower values in the vector
        quickSort(theVect, part, right); //this is the branch to the right or to the higher valyes
    }
}

#endif
