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
    if (s.length() != t.length()) {
        return "false";
    }
    MAP<char, int> map;
    for(unsigned int i = 0; i < s.length(); i++) {
        map[s[i]]++;
        map[t[i]]--;
    }
    for(auto chr : map) {
        if(chr.second) {
            return "false";
        }
    }
    return "true";
}


#endif
