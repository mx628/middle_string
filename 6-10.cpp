#include <iostream>
#include <string>
#include "middle_str.h"

using namespace std;


string itc_maxCharWord(string str){
    return 0;
}

char itc_sameChar(string str) {
    for(int i = 0; i < len1(str); i++)
    {
        int n = 2;
        for (int j = i; j < len1(str); j++)
            if (str[j] == str[i] && str[j] != ' ')
            {
                n--;
                if (n == 0)
                    return str[j];
            }
    }
}

bool itc_isFirstInSecond(string s1, string s2) {
    if (len1(s1) > len1(s2)) {
        return false;
    }
    for (int i = 0; i <= len1(s2) - len1(s1); i++) {
        bool n = true;
        for (int j = 0; j < len1(s1); j++) {
            if (s1[j] != s2[j + i])
                n = false;
        }
        if (n) return n;
    }
    return false;
}

string itc_Cezar(string str, int k) {
    k = k % 26;
    string result = "";
    char chmin = 'a', chmax = 'z';
    for (int i = 0; i < len1(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {chmin = 'A'; chmax = 'Z'; }
        if (k > 0) {
            if (str[i] + k > chmax)
                str[i] = chmin + (str[i] + k - chmax - 1);
            else
                str[i] += k;
        }
        else {
            if (str[i] + k < chmin)
                str[i] = chmax + k + 1 + str[i] - chmin;
            else
                str[i] += k;
        }
    }
    return str;
}

string itc_rmFreeSpace(string str) {
    string str1 = "";
    for (int i = 0; i < len1(str); i++) {
        str1 += str[i];
        while (str[i] == ' ' && str[i + 1] == ' ') i++;
    }

    string result = "";
    for (int i = 1; i < len1(str1) - 1; i++) {
        result += str1[i];
    }
    return result;
}
