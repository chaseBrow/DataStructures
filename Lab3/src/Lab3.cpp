//Author: Chase Brown
//Email: cbrown54@nd.edu
#include "../include/Anagram.h"

int main() {
    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Test 1: two short words which are an Anagram." << ENDL;
    COUT << "s = 'cat', t = 'tac'" << ENDL << "Anagram: ";
    COUT << anagramCheck("cat","tac") << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Test 2: two short words which are NOT an Anagram." << ENDL;
    COUT << "s = 'dog', t = 'dot'" << ENDL << "Anagram: ";
    COUT << anagramCheck("dog","dot") << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Test 3: two short unequal length words" << ENDL;
    COUT << "s = 'cat', t = 'taco'" << ENDL << "Anagram: ";
    COUT << anagramCheck("cat","taco") << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Test 4: two long words which are an Anagram." << ENDL;
    COUT << "s = 'disagreement', t = 'demagnetiser'" << ENDL << "Anagram: ";
    COUT << anagramCheck("disagreement","demagnetiser") << ENDL;

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Test 5: two long words which are NOT an Anagram." << ENDL;
    COUT << "s = 'catastrophic', t = 'reoccupation'" << ENDL << "Anagram: ";
    COUT << anagramCheck("catastrophic","reoccupation") << ENDL;

    return 0;
}
