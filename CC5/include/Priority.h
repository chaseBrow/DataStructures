//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef PRIORITY_H
#define PRIORITY_H

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#define COUT std::cout
#define ENDL std::endl
#define OST std::ostream

template<class T>
class Priority {
private:
    T value;
	unsigned int priority;
public:
    //default constructor
    Priority() : value(), priority() {}

    //overloaded constructor
    Priority(T val, unsigned int pri) : value(val), priority(pri) {}

    //copy constructor
    Priority(const Priority &t) {
        COUT << "Copy constructor called " << ENDL;
    }

    //Assignment operator
    Priority& operator = (const Priority &t) {
        COUT << "Assignment operator called " << ENDL;
        return *this;
    }

    //Destructor
    virtual ~Priority() {}

    friend OST& operator<<( OST& output, const T& val, const unsigned int& pri) {
	   output << "value: " << val << "priority: " << pri << ENDL;
	   return output;
	}

    //Operators **POSSIBLY REVERSE THESE
    bool operator>=( const Priority& pri ) const{
		return priority < pri.weight;
	}

	bool operator>( const Priority& pri ) const{
		return priority <= pri.weight;
	}

	bool operator<=( const Priority& pri ) const{
		return priority > pri.weight;
	}

	bool operator<( const Priority& pri ) const{
		return priority >= pri.weight;
	}

	bool operator==( const Priority& pri ) const{
		return priority == pri.weight;
	}
};

#endif
