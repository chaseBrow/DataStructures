//Author: Chase Brown
//Email: cbrown54@nd.edu

#include "../include/QuickCreative.h"

int main() {
    COUT << "Lets take a look at sorting a deck of cards with Quick Sort." << ENDL;
    COUT << "We will assume an Ace = 1, Jack = 11, Queen = 12, and King = 13." << ENDL;
    COUT << "0xx = diamonds, 1xx = clubs, 2xx = hearts, and 3xx = spades." << ENDL;
    int deck[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,101,102,103,
                    104,105,106,107,108,109,110,111,112,113,201,202,203,204,205,
                    206,207,208,209,210,211,212,213,301,302,303,304,305,306,307,308,
                    309,310,311,312,313
                };

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "First Test: Shuffled Deck of Cards" << ENDL;
    VECT<unsigned int> shuff;
    shuff.assign(deck, deck + 52);
    RAND(shuff.begin(), shuff.end()); //shuffling the deck of cards
    COUT << "unsorted: ";
    print(shuff);
    quickSort(shuff, 0, static_cast<int>(shuff.size() - 1));
    COUT << "sorted: ";
    print(shuff);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Second Test: Pre Sorted Deck of Cards" << ENDL;
    VECT<unsigned int> sorted;
    sorted.assign(deck, deck + 52);
    COUT << "unsorted: ";
    print(sorted);
    quickSort(sorted, 0, static_cast<int>(sorted.size() - 1));
    COUT << "sorted: ";
    print(sorted);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Third Test: One Card out of place (212)" << ENDL;
    VECT<unsigned int> close;
    int deck2[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,101,102,103,
                    104,105,106,107,108,109,110,111,112,113,201,202,203,204,205,
                    206,207,208,209,210,211,213,301,302,303,304,305,306,307,308,
                    309,310,311,312,313,212
                };
    close.assign(deck2, deck2 + 52);
    COUT << "unsorted: ";
    print(close);
    quickSort(close, 0, static_cast<int>(close.size() - 1));
    COUT << "sorted: ";
    print(close);

    COUT << "---------------------------------------------------------" << ENDL;
    COUT << "Fourth Test: Find the missing card" << ENDL;
    COUT << "A random card is chosen and removed from the deck..." << ENDL;
    COUT << "Lets find out which card it is." << ENDL;
    VECT<unsigned int> missing;
    srand((unsigned int)time(NULL));
    int remove = rand() % 52; //picking a random card to remove
    deck[remove-1] = 0;
    missing.assign(deck, deck + 52);
    COUT << "unsorted: ";
    print(missing);
    quickSort(missing, 0, static_cast<int>(missing.size() - 1));
    COUT << "sorted: ";
    print(missing);
    findCard(missing);

    return 0;
}
