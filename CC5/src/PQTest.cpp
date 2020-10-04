//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/PriorityQueue.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     PriorityQueue<STR> que;
     que.insert("test", 7);//string, int (priority)
     que.insert("world", 2);
     que.insert("chase", 3);
     que.insert("cool", 6);
     que.insert("hello", 1);
     que.insert("is", 4);
     return 0;
 }
