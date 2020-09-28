//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/Prob2h.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     VECT<int> terrain0 = {0,1,0,2,1,0,1,3,2,1,2,1};
     waterStorage(terrain0);

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 2: Example 2" << ENDL;
     VECT<int> terrain1 = {0,3,2,2,1,0,1,3,2,1,2,1};
     waterStorage(terrain1);

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 3: Example 3" << ENDL;
     VECT<int> terrain2 = {0,1,1,4,1,1,1,3,2,1,2,4,0,1};
     waterStorage(terrain2);
     return 0;
 }
