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
    PNode *head;
public:

    PriorityQueue() : head(nullptr){
        COUT << "initializing null" << ENDL;
    }

    PriorityQueue(PNode *hed) : head(hed){
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

        PNode* node = new PNode(val, priority);
        if(this->head == nullptr) {
            COUT << "setting head" << ENDL;
            COUT << node << ENDL;
            // node->prev = nullptr;
            this->head = node;
        }
        else {
            PNode* temp = this->head;
            int i = 0;
            while(node->priority >= temp->priority && temp->next) {
                COUT << "while" << ENDL;
                temp = temp->next;
                i++;
            }
            if(node->priority >= temp->priority) {
                COUT << "if" << ENDL;
                node->prev = temp;
                temp->next = node;
            }
            else if(i > 0) {
                COUT << "else if" << ENDL;
                node->next = temp;
                node->prev = temp->prev;
                temp->prev->next = node;
                temp->prev = node;
            }
            else {
                COUT << "else" << ENDL;
                node->next = temp;
                temp->prev = node;
            }
        }

        if(this->head->prev) {
            COUT << "reset head" << ENDL;
            this->head = this->head->prev;
        }
    }
    void print() {
        PNode* temp = this->head;
        while(temp->next) {
            COUT << temp->priority << ENDL;
            temp = temp->next;
        }
        COUT << temp->priority << ENDL;
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
