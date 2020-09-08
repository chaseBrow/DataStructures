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

void printVect(VECT< VECT<int> > printMe) {
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

bool cmp(VECT<int> a, VECT<int> b) {
    return a[0]<b[0];
}

int max(int& val1, int& val2) {
    COUT << "test4" << ENDL;
    return (val1 > val2) ? val1 : val2;
}

int min(int& val1, int& val2) {
    COUT << "test5" << ENDL;
    return (val1 < val2) ? val1 : val2;
}

void merge(VECT< VECT<int> >& intervals) {
    SORT(intervals.begin(), intervals.end(), cmp);
    printVect(intervals);

    int pos = 0;

    for(long unsigned int i = 1; i < intervals.size(); i++) {
        COUT << "test1" << ENDL;
        if(intervals.at(pos).at(1) >= intervals.at(i).at(0)) {
            COUT << "test2" << ENDL;
            intervals.at(pos).at(1) = max(intervals.at(pos).at(1), intervals.at(i).at(1));
            intervals.at(pos).at(0) = min(intervals.at(pos).at(0), intervals.at(i).at(0));
            COUT << "mid: ";
            printVect(intervals);
            intervals.erase(intervals.begin() + 1);
            COUT << "midPost: ";
            printVect(intervals);
            pos++;
        }
        else {
            COUT << "test3" << ENDL;
            pos++;
            intervals.at(pos) = intervals.at(i);
        }
    }
    printVect(intervals);
}

#endif
