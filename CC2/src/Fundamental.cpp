//Author: Chase Brown
//Email: cbrown54@nd.edu

#include "../include/Quick.h"

int main() {
    // COUT << "---------------------------------------------------------" << ENDL;
    // COUT << "First Test: Empty Array" << ENDL;
    // VECT<int> empty;
    // VECT<int> emptySorted = quickSort(empty);
    // print(empty);
    // print(emptySorted);
    //
    // COUT << "---------------------------------------------------------" << ENDL;
    // COUT << "Second Test: Characters" << ENDL;
    // VECT<char> chars;
    // int a[] = {'T', 'h', 'e', 'C', 'o', 'r', 'o', 'n', 'a', 'V', 'i', 'r', 'u', 's', 'S', 'u', 'c', 'k', 's'};
    // chars.assign(a, a + 19);
    // VECT<char> charsSorted = quickSort(chars);
    // print(chars);
    // print(charsSorted);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Third Test: Random 15 Integers" << ENDL;
    VECT<unsigned int> random;
    srand((unsigned int)time(NULL));
    for(unsigned int i = 0; i < 15; i++) {
        random.push_back(rand() % 250);
    }
    quickSort(random, 0, static_cast<int>(random.size()));
    // print(random);
    // print(randomSorted);
    //
    // COUT << "---------------------------------------------------------" << ENDL;
    // COUT << "Fourth Test: Strings" << ENDL;
    // VECT<STR> strings;
    // strings.push_back("Hello,");
    // strings.push_back("my,");
    // strings.push_back("name,");
    // strings.push_back("is,");
    // strings.push_back("is Chase,");
    // strings.push_back("Chase,");
    // strings.push_back("Chase Brown,");
    // VECT<STR> stringsSorted = quickSort(strings);
    // print(strings);
    // print(stringsSorted);

    return 0;
}
