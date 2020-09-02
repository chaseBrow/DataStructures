//Author: Chase Brown
//Email: cbrown54@nd.edu

#ifndef QUICK_H
#define QUICK_H

#include <iostream>
#include <string>
#include <unordered_map>

#define COUT std::cout
#define ENDL std::endl
#define STR std::string
#define MAP std::unordered_map

STR anagramCheck(STR s, STR t) {
    //I start by checking to make sure they are equal length...
    //obviously if they are not, then they cannot be Anagrams
    if (s.length() != t.length()) {
        return "false";
    }
    //initializing the unordered_map
    MAP<char, int> map;
    for(unsigned int i = 0; i < s.length(); i++) {
        map[s[i]]++; //for each character in the first string, I add '1' to the int value
        map[t[i]]--; //for each matching character in the second string, I subtract '1'
    }
    for(auto chr : map) {  //reading through each value in the map.  If any of the integers = '1'
        if(chr.second) {   //then we know it is not a valid Anagram
            return "false";
        }
    }
    return "true";
}

#endif
