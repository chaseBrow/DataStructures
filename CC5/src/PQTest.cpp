//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/PriorityQueue.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     PriorityQueue<STR> que;
     que.insert("test", 3);//string, int (priority)
     que.insert("world", 1);
     que.insert("chase", 6);
     que.insert("cool", 5);
     que.insert("hello", 2);
     que.insert("is", 4);
     que.print();
     return 0;
 }
