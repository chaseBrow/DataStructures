#ifndef LAB1_H
#define LAB1_H

#include <iostream> /*C++ version of stdio.h*/
#include <cstdlib> /* Equivalent of stdlib.h */
#include <string> /* String Library */
#include <sstream> /* String Stream for inputting to variables */

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin
#define OST std::ostream //this was for trying to setup the friend in class for Lab1c

#define STRING std::string
#define SSTREAM std::stringstream

bool noBadInt(STRING testString){ //this is a slight manipulation of Dr. Morrison CinStr.cpp file

	for(unsigned int i = 0; i < testString.length(); i++){
		if(testString[i] < '0' || testString[i] > '9'){
			return false;
		}
	}
	return true;
}

bool noBadFltDbl(STRING testString){ //this is a slight manipulation of Dr. Morrison CinStr.cpp file
	for(unsigned int i = 0; i < testString.length(); i++){
		if(testString[i] < '0' || testString[i] > '9'){ //looking for every character that isnt 0-9
			if(testString[i] != '.'){
                if (testString[i] != '-') {
                    if(i != 0) {
                        return false;
                    }
                }
			}
		}
	}
	return true;
}

void userInput(long unsigned int& a, float& b, double& c, char& d) {
	STRING strLongUnsig; //cannot be negative and no decimal

    STRING strFloat; //can be negative and can have decimal

    STRING strDouble; //can be negative and can have decimal

	COUT << "Input a Long Unsigned Integer: ";
	CIN >> strLongUnsig;

	if(SSTREAM(strLongUnsig) >> a //this is reading from strLongUnsig and writing to 'a'
		&& noBadInt(strLongUnsig)
		&& strLongUnsig.find(".") == STRING::npos
        && strLongUnsig.find("-") == STRING::npos){ //string::std::npos == -1.  *.find() will return -1 if it cannot find a value
	}
	else{
		std::cerr << strLongUnsig << " is not a valid Long Unsigned Integer" << ENDL;
		exit(-1);
	}
    //


    COUT << "Input a Float: ";
	CIN >> strFloat;

	if(SSTREAM(strFloat) >> b && noBadFltDbl(strFloat)) {
	}
	else{
		std::cerr << strFloat << " is not a valid Float" << ENDL;
		exit(-1);
	}
    //


    COUT << "Input a Double: ";
	CIN >> strDouble;

	if(SSTREAM(strDouble) >> c && noBadFltDbl(strDouble)){
	}
	else{
		std::cerr << strDouble << " is not a valid Double" << ENDL;
		exit(-1);
	}


    COUT << "Input a Character: ";
	CIN >> d;
}


#endif
