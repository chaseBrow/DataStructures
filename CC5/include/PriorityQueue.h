//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef PRIORITY_H
#define PRIORITY_H

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define OST std::ostream
#define STR std::string

#include "PriorityNode.h"

class PriorityQueue {
    PNode* head;

    class PNode {
    private:
        STR value;
    	unsigned int priority;
        PNode* next;
        PNode* prev;
    public:
        //default constructor
        PNode() : value(), priority(), next(), prev() {}
        //overloaded constructor
        PNode(STR val, unsigned int pri, PNode* next, PNode* prev) : value(val), priority(pri), next(next), prev(prev)  {}
    };

    void insert() {

    }

    void pop() {

    }

    PNode* front() {

    }

    void delete() {

    }

};

#endif
