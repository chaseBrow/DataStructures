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

void printLand(VECT< VECT<int> > printMe) {
    for(long unsigned int j = 0; j < printMe.size(); j++) {
        for(long unsigned int i = 0; i < printMe.at(j).size(); i++) {
            if(i) COUT << " ";
            COUT << printMe.at(j).at(i);
        }
        COUT << "\n";
    }
    COUT << ENDL;
}

//this function is for printing out a two dimensional vector
void printVect(VECT< VECT<long unsigned int> > printMe) {
    COUT << "[x, y]" << ENDL;
    for(long unsigned int j = 0; j < printMe.size(); j++) {
        COUT << "[";
        for(long unsigned int i = 0; i < printMe.at(j).size(); i++) {
            if(i) COUT << ", ";
            COUT << printMe.at(j).at(i);
        }
        COUT << "]\n";
    }
    COUT << ENDL;
}

void printAtlantics(VECT<node*> visited, VECT< VECT<int>> land) {
    VECT< VECT<long unsigned int>> output;
    for(unsigned int i = 0; i < visited.size(); i++) {
        if (visited.at(i)->x == land[0].size() - 1 || visited.at(i)->y == land.size() - 1) {
            VECT<long unsigned int> temp;
            temp.push_back(visited.at(i)->x);
            temp.push_back(visited.at(i)->y);
            if(FIND(output.begin(), output.end(), temp) == output.end()) {
                output.push_back(temp);
            }
        }
    }
    printVect(output);
}

void dfs(STC<node*>& stack, VECT<node*>& visited, node* current, VECT< VECT<int>> land) {
    stack.pop();
    auto maxX = land[0].size() - 1;
    auto maxY = land.size() - 1;

    if(FIND(visited.begin(), visited.end(), current->down) == visited.end() && current->y < maxY
     && land.at(current->y).at(current->x) <= land.at(current->y + 1).at(current->x)) {
        node* down = new node();
        node* right = new node();
        current->down->down = down;
        current->down->right = right;
        current->down->y = current->y + 1;
        current->down->x = current->x;
        stack.push(current->down);
    }
    if(FIND(visited.begin(), visited.end(), current->right) == visited.end() && current->x < maxX
     && land.at(current->y).at(current->x) <= land.at(current->y).at(current->x + 1)) {
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
    printLand(land);
    if(land.size() == 0 || land[0].size() == 0){
            COUT << "empty" << ENDL;
    }

    STC<node*> stack;
    VECT<node*> visited;

    for(unsigned int y = 0; y < land.size(); y++) {
        node* current = new node();
        node* down = new node();
        node* right = new node();
        current->x = 0;
        current->y = y;
        current->right = right;
        current->down = down;
        stack.push(current);

        while(!stack.empty()) {
            current = stack.top();
            dfs(stack, visited, current, land);
        }
        y++;
    }
    for(unsigned int x = 0; x < land[0].size(); x++) {
        node* current = new node();
        node* down = new node();
        node* right = new node();
        current->x = x;
        current->y = 0;
        current->right = right;
        current->down = down;
        stack.push(current);

        while(!stack.empty()) {
            current = stack.top();
            dfs(stack, visited, current, land);
        }
        x++;
    }
    printAtlantics(visited, land);
}

#endif
