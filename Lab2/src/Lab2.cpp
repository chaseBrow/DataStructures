#include "../include/functions.h"

int main() {
    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "First Test: Empty Array" << ENDL;
    VECT<int> empty;
    printElem(empty);
    COUT << "Result: " << lngIncSeq(empty) << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Second Test: Negative and Positive Integers" << ENDL;
    VECT<int> ints;
    int a[] = {10, -9, 2, 5, 3, -7, 101, 18};
    ints.assign(a, a + 8);
    printElem(ints);
    COUT << "the length is: " << lngIncSeq(ints) << ENDL;


    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Third Test: Unsigned Integers" << ENDL;
    VECT<unsigned int> unsig;
    int b[] = {10, 5, 8, 3, 9, 4, 12, 11, 12};
    unsig.assign(b, b + 9);
    printElem(unsig);
    COUT << "the length is: " << lngIncSeq(unsig) << ENDL;


    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Fourth Test: Characters" << ENDL;
    VECT<char> chars;
    int c[] = {'e', 'A', 'B', 'a', 'C', 'f', 'D', 'E'};
    chars.assign(c, c + 8);
    printElem(chars);
    COUT << "the length is: " << lngIncSeq(chars) << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Fifth Test: Random 15 Integers" << ENDL;
    VECT<unsigned int> random;
    for(unsigned int i = 0; i < 15; i++) {
        random.push_back(rand() % 250);
    }
    printElem(random);
    COUT << "the length is: " << lngIncSeq(random) << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Sixth Test: Strings" << ENDL;
    VECT<STR> strings;
    strings.push_back("Hello,");
    strings.push_back("my,");
    strings.push_back("name,");
    strings.push_back("is,");
    strings.push_back("is Chase,");
    strings.push_back("Chase,");
    strings.push_back("Chase Brown,");
    printElem(strings);
    COUT << "the length is: " << lngIncSeq(strings) << ENDL;

    return 0;
}
