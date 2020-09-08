//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <vector>
#include <algorithm>

#define COUT std::cout
#define ENDL std::endl
#define VECT std::vector
#define SORT std::sort

void printVect(VECT< VECT<int> >& printMe) {
    for(long unsigned int j = 0; j < printMe.size(); j++) {
        COUT << "{";
        for(long unsigned int i = 0; i < printMe.at(j).size(); i++) {
            if(i) COUT << ",";
            COUT << printMe.at(j).at(i);
        }
        COUT << "}";
    }
    COUT << ENDL;
}

void merge(VECT< VECT<int> >& intervals) {
    VECT<int> test = {10,20};
    intervals.push_back(test);
    printVect(intervals);
}

#endif
