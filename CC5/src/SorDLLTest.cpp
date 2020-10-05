/**********************************************
* File: DLLtest.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*
* Editor: Chase Brown
* Email: cbrown54@nd.edu
* This file is an edited version of Dr. Morrisons test script
* for a Doubly Linked List
**********************************************/

#include "../include/PriorityQueue.h"

int getAndCheckInput(char* argv){

	int iter;
	for(iter = 0; argv[iter] != 0; ++iter){

		/* First character can be an number or */
		if(iter == 0 && (argv[iter] < 48 || argv[iter] > 57) && argv[iter] != 45){
			std::cerr <<  "Not a valid input: " << argv << " " << argv[iter] << std::endl;
			exit(-1);

		}
		else if( iter > 0 && (argv[iter] < 48 || argv[iter] > 57) ){

			std::cerr <<  "Not a valid input: " << argv << " " << argv[iter] << std::endl;
			exit(-1);
		}
	}


	return atoi(argv);
}


int main (int argc, char** argv)
{

	/* Test inputs for at least one integer */
	if(argc < 2){

		std::cerr <<  "Need at least one integer" << std::endl;
		exit(-1);
	}

	/* Initialize Number of Inputs to Linked List */
	int listLen = argc - 1;
    int num;

	/* Call default constructor for Linked List */
	PriorityQueue<int> theQue;

	/* Start at the first int, and go until the end of the command line */
	for(int i = 1; i <= listLen; ++i){

		int tempInt = getAndCheckInput(argv[i]); // atoi(argv[iter]);
		COUT << "Inserting " << tempInt << " into Linked List" << ENDL;
		theQue.insert(0, tempInt);
		COUT << "theQue: ";
        theQue.printPriority();
        COUT << ENDL;

	}

	while(!theQue.isEmpty()){

		COUT << ENDL << "Enter a value to be deleted: ";
		CIN >> num;
		theQue.removeInt(num);
		/* Overloaded Output Operator */
		COUT << "theQue: ";
        theQue.printPriority();
        COUT << ENDL;

	}

    return 0;
}
