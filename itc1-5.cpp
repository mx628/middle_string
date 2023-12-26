#include <iostream>
#include <string>
#include "middle_str.h"

using namespace std;

bool itc_isDigit(unsigned char c) {//работает
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

unsigned char itc_toUpper(unsigned char c) {//работает
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

unsigned char itc_changeCase(unsigned char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    if(c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}


bool itc_compare(string s1, string s2){
    if (len1(s1) != len1(s2))
        return 0;
    for (int i = 0; i < len1(s1); i++) {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}

int itc_countWords(string str){
    return 0;
}

