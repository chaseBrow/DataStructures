//Author: Chase Brown
//Email: cbrown54@nd.edu

#include "../include/Quick.h"

int main() {
    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "First Test: Empty Array" << ENDL;
    VECT<int> empty;
    COUT << "unsorted: ";
    print(empty);
    quickSort(empty, 0, static_cast<int>(empty.size() - 1));
    COUT << "sorted: ";
    print(empty);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Second Test: Characters" << ENDL;
    VECT<char> chars;
    int a[] = {'T', 'H', 'E', 'C', 'O', 'R', 'O', 'N', 'A', 'V', 'I', 'R', 'U', 'S', 'S', 'U', 'C', 'K', 'S'};
    chars.assign(a, a + 19);
    COUT << "unsorted: ";
    print(chars);
    quickSort(chars, 0, static_cast<int>(chars.size() - 1));
    COUT << "sorted: ";
    print(chars);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Third Test: Random 15 Integers" << ENDL;
    VECT<unsigned int> random;
    srand((unsigned int)time(NULL));
    for(unsigned int i = 0; i < 15; i++) {
        random.push_back(rand() % 100);
    }
    COUT << "unsorted: ";
    print(random);
    quickSort(random, 0, static_cast<int>(random.size() - 1));
    COUT << "sorted: ";
    print(random);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Fourth Test: Strings" << ENDL;
    VECT<STR> strings;
    strings.push_back("Hello");
    strings.push_back("my");
    strings.push_back("name");
    strings.push_back("is");
    strings.push_back("is Chase");
    strings.push_back("Chase");
    strings.push_back("Chase Brown");
    COUT << "unsorted: ";
    print(strings);
    quickSort(strings, 0, static_cast<int>(strings.size() - 1));
    COUT << "sorted: ";
    print(strings);

    return 0;
}
