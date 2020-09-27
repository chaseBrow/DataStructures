//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef PROB1_H
#define PROB1_H

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define COUT std::cout
#define ENDL std::endl
#define VECT std::vector
#define STC std::stack
#define PAIR std::pair
#define FIND std::find
#define DIST std::distance

class node {
public:
    long unsigned int x;
    long unsigned int y;
    node *right;
    node *down;
};

//this function is for printing out a two dimensional vector
void printVect(VECT< VECT<int> > printMe) {
    for(long unsigned int j = 0; j < printMe.size(); j++) {
        for(long unsigned int i = 0; i < printMe.at(j).size(); i++) {
            if(i) COUT << " ";
            COUT << printMe.at(j).at(i);
        }
        COUT << "\n";
    }
    COUT << ENDL;
}

void dfs(STC<node*>& stack, VECT<node*>& visited, node* current, long unsigned int maxX, long unsigned int maxY) {
    stack.pop();
    COUT << current->right << ", " << current->down << ENDL;
    COUT << current->x << ", " << current->y << ENDL;
    if(FIND(visited.begin(), visited.end(), current->down) == visited.end() && current->y < maxY) {
        node* down = new node();
        node* right = new node();
        current->down->down = down;
        current->down->right = right;
        current->down->y = current->y + 1;
        current->down->x = current->x;
        stack.push(current->down);
    }
    if(FIND(visited.begin(), visited.end(), current->right) == visited.end() && current->x< maxX) {
        node* down = new node();
        node* right = new node();
        current->right->down = down;
        current->right->right = right;
        current->right->y = current->y;
        current->right->x = current->x + 1;

        stack.push(current->right);
    }
    visited.push_back(current);
}

//calculate atlantic --> pacific
void calculate(VECT< VECT<int> > land) {
    printVect(land);
    if(land.size() == 0 || land[0].size() == 0){
            COUT << "empty" << ENDL;
    }
    auto maxX = land[0].size();
    auto maxY = land.size();

    node* current = new node();
    node* down = new node();
    node* right = new node();
    current->x = 0;
    current->y = 0;
    current->right = right;
    current->down = down;

    STC<node*> stack;
    VECT<node*> visited;

    stack.push(current);
    COUT << current->right << ", " << current->down << ENDL;
    COUT << current->x << ", " << current->y << ENDL;

    while(!stack.empty()) {
        COUT << stack.size() << ENDL;
        current = stack.top();
        dfs(stack, visited, current, maxX, maxY);
    }


}



//this is the comparison function called in the sort method

//function which returns the larger of the two values
int max(int& val1, int& val2) {
    return (val1 > val2) ? val1 : val2;
}

//function which returns the smaller of the two values
int min(int& val1, int& val2) {
    return (val1 < val2) ? val1 : val2;
}

//main merge function which finds overlapping intervals
void merge(VECT< VECT<int> >& intervals) {
    COUT << "before: ";
    printVect(intervals);

    //int for keeping track of the first interval in a comparison
    int pos = 0;

    for(long unsigned int i = 1; i < intervals.size(); i++) {
        //checking to see if the end of the first interval overlaps with the start of the following interval
        if(intervals.at(pos).at(1) >= intervals.at(i).at(0)) {
            intervals.at(pos).at(1) = max(intervals.at(pos).at(1), intervals.at(i).at(1)); //wrting the highest value to the end of the interval
            intervals.at(pos).at(0) = min(intervals.at(pos).at(0), intervals.at(i).at(0)); //writing the lowest value to the start of the interval
            intervals.erase(intervals.begin() + i); //erasing the following interval because we just merged it
            i--;
        }
        else { //if the intervals do not overlap, we simply iterate to the next comparison
            pos++;
            intervals.at(pos) = intervals.at(i);
        }
    }
    COUT << "after: ";
    printVect(intervals);
}

#endif
