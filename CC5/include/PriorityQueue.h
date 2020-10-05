//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define OST std::ostream
#define STR std::string
#define CIN std::cin


template<class T>
class PriorityQueue {
private:
    //this is my struct for each node of the DLList/Priority Queue
    struct PNode {
        T value;
        int priority;
        PNode* next;
        PNode* prev;

        PNode(T val, int pri) : value(val), priority(pri), next(nullptr), prev(nullptr) {}

        //here we have the destructor, copy constructor, and copy assignment to
        //make sure we pass the rule of three warning
        ~PNode() {
            delete next;
            delete prev;
        }

        PNode(const PNode & pn) {}
        PNode& operator=(PNode const&) {};

    };
    PNode *head;
public:
    //constructor
    PriorityQueue() : head(nullptr){
        COUT << "initializing null" << ENDL;
    }
    //overloaded constructor
    PriorityQueue(PNode *hed) : head(hed){
        COUT << "initializing with head" << ENDL;
    }

    //here we have the destructor, copy constructor, and copy assignment to
    //make sure we pass the rule of three warning
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

    //function for inserting a new item into the priority queue/DLList
    //this function will also sort the DLList
    void insert(T val, unsigned int priority) {

        PNode* node = new PNode(val, priority);
        if(this->head == nullptr) {
            this->head = node;
        }
        else {
            PNode* temp = this->head;
            int i = 0;
            while(node->priority >= temp->priority && temp->next) {
                temp = temp->next;
                i++;
            }
            if(node->priority >= temp->priority) {
                node->prev = temp;
                temp->next = node;
            }
            else if(i > 0) {
                node->next = temp;
                node->prev = temp->prev;
                temp->prev->next = node;
                temp->prev = node;
            }
            else {
                node->next = temp;
                temp->prev = node;
            }
        }

        if(this->head->prev) {
            this->head = this->head->prev;
        }
    }
    //function for printing both the value and priority
    void print() {
        if(this->head) {
            PNode* temp = this->head;
            while(temp->next) {
                COUT << "Priority: " << temp->priority;
                COUT << " with value: " << temp->value << ENDL;
                temp = temp->next;
            }
            COUT << "Priority: " << temp->priority;
            COUT << " with value: " << temp->value << ENDL;
        }
        else {
            COUT << "List is empty." << ENDL;
        }

    }
    //For printing the Priority only
    void printPriority() {
        if(this->head) {
            PNode* temp = this->head;
            COUT << "The list is: ";
            while(temp->next) {
                COUT << temp->priority << "  ";
                temp = temp->next;
            }
            COUT << temp->priority << ENDL;
        }
        else {
            COUT << "List is empty." << ENDL;
        }
    }

    //this is the remove function for a node based on the value
    void pop(T val) {
        PNode* temp = this->head;
        bool found = false;
        while(temp) {
            if(temp->value == val) {
                found = true;
                if(!temp->next && !temp->prev) {
                    this->head = nullptr;
                }
                else if(temp->next && !temp->prev) {
                    this->head = temp->next;
                    temp->next->prev = nullptr;
                }
                else if(temp->prev && !temp->next) temp->prev->next = nullptr;
                else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
            }
            if(!temp->next) {
                break;
            }
            temp = temp->next;
        }
        if(!found) {
            COUT << "Value " << val << " does not exist in the list" << ENDL;
        }
    }

    //to check if the PQue/DLList is empty
    bool isEmpty() {
        if(this->head == nullptr) {
            return true;
        }
        else return false;
    }

    //this is the function for removing a node based on the Priority
    void removeInt(int num) {
        PNode* temp = this->head;
        bool found = false;
        while(temp) {
            if(temp->priority == num) {
                found = true;
                COUT << "Found int: " << temp->priority << ENDL;
                if(!temp->next && !temp->prev) {
                    this->head = nullptr;
                }
                else if(temp->next && !temp->prev) {
                    this->head = temp->next;
                    temp->next->prev = nullptr;
                }
                else if(temp->prev && !temp->next) temp->prev->next = nullptr;
                else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
            }
            if(!temp->next) {
                break;
            }
            temp = temp->next;
        }
        if(!found) {
            COUT << "Integer " << num << " does not exist in the list" << ENDL;
        }
    }

    template <class U>
    friend OST& operator<<(OST& os, const PriorityQueue<U> & pq){
        pq.display(os);
        return os;
    }

};

#endif
