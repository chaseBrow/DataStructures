//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef PROB2_H
#define PROB2_H

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define COUT std::cout
#define ENDL std::endl
#define VECT std::vector
//function for printing the terrain
void printTerrain(VECT<int> terrain) {
    COUT << "[";
    for (long unsigned int i = 0; i < terrain.size(); i++) {
        COUT << terrain.at(i);
        if (i != terrain.size()-1) COUT << ", ";
    }
    COUT << "]" << ENDL;
}

void waterStorage(VECT<int> terrain) {
    printTerrain(terrain);
    long unsigned int left = 0;
    int leftMax = 0;
    long unsigned int right = terrain.size() - 1;
    int rightMax = 0;
    int water = 0;
    //this loop will move the left and right pointers towards eachother until they cross
    while(left <= right) {
        //if the left value is smaller than the right, we will iterate the left
        if(terrain.at(left) <= terrain.at(right)) {
            if(terrain.at(left) > leftMax) {
                leftMax = terrain.at(left);
            }
            else {
                water += leftMax - terrain.at(left);
            }
            left++;
        }
        //else if the right is smaller than the left, we will deiterate the right
        else {
            if(terrain.at(right) > rightMax) {
                rightMax = terrain.at(right);
            }
            else {
                water += rightMax - terrain.at(right);
            }
            right--;
        }
    }
    COUT << water << ENDL;
}

#endif
