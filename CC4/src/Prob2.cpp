//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/Prob2h.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     VECT<int> terrain0 = {0,1,0,2,1,0,1,3,2,1,2,1};
     waterStorage(terrain0);

     // COUT << "--------------------------------------------------------" << ENDL;
     // COUT << "Test 2: Example 2" << ENDL;
     // VECT< VECT<int> > land1 = {{1,3,4,3,7},{2,2,3,4,4},{2,4,5,3,1},{6,7,5,4,5},{5,1,6,2,4},{2,2,3,4,4},{2,4,5,3,1},{6,7,5,4,5},{5,1,6,2,4}};
     // calculate(land1);
     //
     // COUT << "--------------------------------------------------------" << ENDL;
     // COUT << "Test 3: Example 3" << ENDL;
     // VECT< VECT<int> > land2 = {{1,3,4,3,7,5,6},{2,2,3,4,4,1,2},{2,4,5,3,1,5,8},{6,7,5,4,5,6,9},{5,1,6,2,4,3,2},{2,4,5,6,7,7,8},{2,3,5,4,4,5,8}};
     // calculate(land2);
     return 0;
 }
