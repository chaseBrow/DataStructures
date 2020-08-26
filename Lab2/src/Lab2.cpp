#include "../include/functions.h"

template<class Type>
void printElem(VECT<Type> theVect) {
    for(unsigned int i = 0; i < theVect.size(); i++) {
        COUT << theVect.at(i) << ENDL;
    }
}

int main() {
    VECT<int> ints;
    int a[] = {10, 9, 2, 5, 3, 7, 101, 18};
    ints.assign(a, a + 8);
    printElem(ints);

    VECT<unsigned int> unsig;
    int b[] = {10, 5, 8, 3, 9, 4, 12, 11, 12};
    unsig.assign(b, b + 9);
    printElem(unsig);

    VECT<char> chars;
    int c[] = {'e', 'A', 'B', 'a', 'C', 'f', 'D', 'E'};
    chars.assign(c, c + 8);
    printElem(chars);

    VECT<int> unsig2;
    int d[] = {10, 5, 7, 92, 14, 8, 3, 9, 1, 4, 12, 11, 27, 12};
    unsig2.assign(d, d + 14);
    printElem(unsig2);

    VECT<STR> strings;
    int e[] = {"Hello", "my", "name", "is", "is Chase", "Chase", "Chase Brown"};
    strings.assign(e, e + 7);
    printElem(strings);


    return 0;
}
