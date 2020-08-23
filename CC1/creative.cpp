#include "creative.h"
#include "creativePas.cpp"

int main() {
    COUT << "Have you ever wondered which pizza joint can make the most unique pizzas?" << ENDL;
    COUT << "Well I worked at a Dominos Pizza for 3 years in high school.  Let me educate you on the best pizza chain." << ENDL;
    COUT << "**Disclaimer: If Dominos is not your favority pizza chain, please do not let this affect your bias towards this program**" << ENDL;

    Pizza dominos(5,5,5,27);
    Pizza pizzaHut(4,4,1,17);
    Pizza lilCaesars(3,1,1,12);
    Pizza papaJohns(3,5,2,20);

    // LIST<Pizza> pizzaChains = {
    //     Pizza(5,5,5,27,"Dominos"),
    //     Pizza(4,4,1,17,"Pizza Hut"),
    //     Pizza(3,1,1,12,"Little Caesars"),
    //     Pizza(3,5,2,20,"Papa Johns")
    // };



    int chs, top;

    COUT << "Please tell me how many unique cheeses and toppings you would like on your pizza." << ENDL;
    COUT << "Cheeses: ";
    CIN >> chs;
    COUT << "Toppings: ";
    CIN >> top;

    // int Dominos = getTriangleSize();
    // int** triangle = buildTriangle(size);
    //
    // printTriangle(triangle, size);
    //
    // printLocation(triangle, size);
    //
    // deleteTriangle(triangle, size);
    return 0;
}
