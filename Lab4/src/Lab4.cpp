//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/MergeInt.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     VECT< VECT<int> > intervals = {{1,3},{2,6},{8,10},{15,18}};
     merge(intervals);

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 2: sharing an end value with the start" << ENDL;
     intervals = {{1,4},{4,5}};
     merge(intervals);

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 3: Empty vectors" << ENDL;
     intervals = {};
     merge(intervals);

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 4: unsorted" << ENDL;
     intervals = {{16,24},{2,6},{8,10},{1,3},{15,18}};
     merge(intervals);

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 4: values contained in bounds of previous" << ENDL;
     intervals = {{1,3},{2,6},{3,5},{8,10},{15,18}};
     merge(intervals);
 }
