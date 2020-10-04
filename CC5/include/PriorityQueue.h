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


template<class T>
class PriorityQueue {
private:
    struct PNode {
        T value;
        unsigned int priority;
        PNode * next = new PNode();
        PNode * prev = new PNode();

        PNode(T val, unsigned int pri) : value(val), priority(pri), next(nullptr), prev(nullptr) {}
    };
    PNode *head, *tail;
public:

    PriorityQueue() : head(nullptr), tail(nullptr){
        COUT << "initializing null" << ENDL;
    }

    PriorityQueue(PNode *hed) : head(hed), tail(nullptr){
        COUT << "initializing with head" << ENDL;
    }

    ~PriorityQueue() {
        PNode *tmp = nullptr;
        while (head)
        {
          tmp = head;
          head = head->next;
          delete tmp;
        }
        head = nullptr;
    }

    PriorityQueue(const PriorityQueue<T> & pq) = delete;
    PriorityQueue& operator=(PriorityQueue const&) = delete;


    void insert(T val, unsigned int priority) {
        COUT << this->head << ENDL;
        // COUT << word << " " << priority << ENDL;
        PNode* node = new PNode(val, priority);

        // if(this->head == nullptr) {
        //     node->prev = nullptr;
        //     this->head = node;
        // }
    }

    void pop() {
        COUT << "front";
    }

    void front() {
        COUT << "front";
    }

    void remove() {
        COUT << "front";
    }

};

#endif
