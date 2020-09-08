//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/MergeInt.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: " << ENDL;
     VECT< VECT<int> > intervals = {{1,3},{2,6},{8,10},{15,18}};
     merge(intervals);
     printVect(intervals);
}
