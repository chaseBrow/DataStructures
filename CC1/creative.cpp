#include "creative.h"
#include "creativePas.cpp"

int main() {
    COUT << "Have you ever wondered which pizza joint can make the most unique pizzas?" << ENDL;
    COUT << "Well I worked at a Dominos Pizza for 3 years in high school.  Let me educate you on the best pizza chain." << ENDL;
    COUT << "**Disclaimer: If Dominos is not your favority pizza chain, please do not let this affect your bias towards this program**" << ENDL;

    Pizza dominos(5,5,5,17); //5,5,5,27
    Pizza pizzaHut(4,4,1,17);
    Pizza lilCaesars(3,1,1,12);
    Pizza papaJohns(3,5,2,20);

    int chs, top;

    COUT << "Please tell me how many unique cheeses and toppings you would like on your pizza." << ENDL;
    COUT << "Cheeses: ";
    CIN >> chs;
    COUT << "Toppings: ";
    CIN >> top;


    // dominos.printTriangle();



    int comb = dominos.printCombination(chs, top);
    if (comb) {
        COUT << "Dominos has: " << comb << " combinations" << ENDL;
    }
    else {
        COUT << "Dominos does not offer enough cheeses or toppings to satisfy your cravings." << ENDL;
    }

    comb = pizzaHut.printCombination(chs, top);
    if (comb) {
        COUT << "Pizza Hut has: " << comb << " combinations" << ENDL;
    }
    else {
        COUT << "Pizza Hut does not offer enough cheeses or toppings to satisfy your cravings" << ENDL;
    }

    comb = lilCaesars.printCombination(chs, top);
    if (comb) {
        COUT << "Little Caesars has: " << comb << " combinations" << ENDL;
    }
    else {
        COUT << "Little Caesars does not offer enough cheeses or toppings to satisfy your cravings" << ENDL;
    }

    comb = papaJohns.printCombination(chs, top);
    if (comb) {
        COUT << "Papa Johns has: " << comb << " combinations" << ENDL;
    }
    else {
        COUT << "Papa Johns does not offer enough cheeses or toppings to satisfy your cravings" << ENDL;
    }


    dominos.deleteTriangles();
    return 0;
}
