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
        int priority;
        PNode* next;
        PNode* prev;

        PNode(T val, int pri) : value(val), priority(pri), next(nullptr), prev(nullptr) {}
        ~PNode() {
            delete next;
            delete prev;
        }

        PNode(const PNode & pn) {}
        PNode& operator=(PNode const&) {};

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

    PriorityQueue(const PriorityQueue<T> & pq) {}
    PriorityQueue& operator=(PriorityQueue const&) {};


    void insert(T val, unsigned int priority) {
        COUT << this->head << ENDL;
        // COUT << word << " " << priority << ENDL;
        PNode* node = new PNode(val, priority);
        COUT << node << ENDL;
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

    template <class U>
    friend OST& operator<<(OST& os, const PriorityQueue<U> & pq){
        pq.display(os);
        return os;
    }

};

#endif
