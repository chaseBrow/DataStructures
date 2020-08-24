// Author: Chase Brown
// E-mail: cbrown54@nd.edu
#include "creative.h"
#include "creativePas.cpp"

int main() {
    COUT << ENDL << "Have you ever wondered which pizza joint can make the most unique pizzas?" << ENDL << ENDL;
    COUT << "Well I worked at a Dominos Pizza for 3 years in high school.  Let me educate you on the best pizza chain." << ENDL;
    COUT << "**Disclaimer: If Dominos is not your favority pizza chain, please do not let this affect your bias towards this program**" << ENDL << ENDL;

    //creating a Pizza class for each one of the pizza joints
    Pizza dominos(5,5,5,17); //# of crusts, sauces, cheeses, toppings avaliable
    Pizza pizzaHut(4,4,1,17);
    Pizza lilCaesars(3,1,1,12);
    Pizza papaJohns(3,5,2,20);

    //declaring the user input
    int chs, top;

    COUT << "Please tell me how many unique cheeses and toppings you would like on your pizza." << ENDL;
    COUT << "Cheeses: ";
    CIN >> chs;
    COUT << "Toppings: ";
    CIN >> top;

    //collecting the # of combinatins each pizza joint is capable of making
    //we only pass the number of cheeses and toppings the user wants because we
    //assume the pizza can only have one crust and one sauce
    int comb = dominos.printCombination(chs, top);
    if (comb) {
        COUT << "Dominos has: " << comb << " combinations" << ENDL;
    }
    //if there are not enough cheeses or topping avaliable for user input
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


    //freeing all arrays from the 16 triangles
    dominos.deleteTriangles();
    pizzaHut.deleteTriangles();
    lilCaesars.deleteTriangles();
    papaJohns.deleteTriangles();
    return 0;
}
