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

//this function is for printing out a two dimensional vector
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

//this is the comparison function called in the sort method
bool cmp(VECT<int> a, VECT<int> b) {
    return a[0]<b[0];
}

//function which returns the larger of the two values
int max(int& val1, int& val2) {
    return (val1 > val2) ? val1 : val2;
}

//function which returns the smaller of the two values
int min(int& val1, int& val2) {
    return (val1 < val2) ? val1 : val2;
}

//main merge function which finds overlapping intervals
void merge(VECT< VECT<int> >& intervals) {
    SORT(intervals.begin(), intervals.end(), cmp);
    COUT << "before: ";
    printVect(intervals);

    //int for keeping track of the first interval in a comparison
    int pos = 0;

    for(long unsigned int i = 1; i < intervals.size(); i++) {
        //checking to see if the end of the first interval overlaps with the start of the following interval
        if(intervals.at(pos).at(1) >= intervals.at(i).at(0)) {
            intervals.at(pos).at(1) = max(intervals.at(pos).at(1), intervals.at(i).at(1)); //wrting the highest value to the end of the interval
            intervals.at(pos).at(0) = min(intervals.at(pos).at(0), intervals.at(i).at(0)); //writing the lowest value to the start of the interval
            intervals.erase(intervals.begin() + i); //erasing the following interval because we just merged it
            i--;
        }
        else { //if the intervals do not overlap, we simply iterate to the next comparison
            pos++;
            intervals.at(pos) = intervals.at(i);
        }
    }
    COUT << "after: ";
    printVect(intervals);
}

#endif
