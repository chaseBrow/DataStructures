//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/Prob1h.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     VECT< VECT<int> > land = {{1,3,4,3,7},{2,2,3,4,4},{2,4,5,3,1},{6,7,5,4,5},{5,1,6,2,4}};
     calculate(land);
     return 0;
 }
