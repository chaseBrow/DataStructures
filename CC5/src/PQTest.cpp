//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/PriorityQueue.h"
 int main() {
     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 1: Example 1" << ENDL;
     PriorityQueue<STR> que1;
     COUT  << "Sorted Priority Queue: " << ENDL;
     que1.insert("Cheering", 5);
     que1.insert("The", 3);
     que1.insert("Name", 7);
     que1.insert("Wake", 1);
     que1.insert("Echoes", 4);
     que1.insert("Her", 6);
     que1.insert("Up", 2);
     que1.print();

     COUT  << ENDL << "Sorted Priority Queue after removing 'Her', 'Wake', and 'Echoes': " << ENDL;
     que1.pop("Her");
     que1.pop("Wake");
     que1.pop("Echoes");
     que1.print();

     COUT << "--------------------------------------------------------" << ENDL;
     COUT << "Test 2: Example 2" << ENDL;
     PriorityQueue<STR> que2;
     que2.insert("Hello", 1);
     que2.insert(",", 3);
     que2.insert("World", 2);
     que2.insert("Name", 5);
     que2.insert("My", 4);
     que2.insert("Is", 6);
     que2.insert("Chase", 7);
     que2.print();

     COUT  << ENDL << "Sorted Priority Queue after removing 'Hello', 'World', and ',': " << ENDL;
     que2.pop("Hello");
     que2.pop("World");
     que2.pop(",");
     que2.print();

     return 0;
 }
