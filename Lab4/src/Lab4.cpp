//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/MergeInt.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: " << ENDL;
     VECT< VECT<int> > intervals = {{2,6},{8,10},{1,3},{15,18}};
     merge(intervals);
 }
