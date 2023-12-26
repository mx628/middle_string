#include <iostream>
#include <string>

using namespace std;

long long len1(string str) {
    long long i = 0, n = 0;
    while (str[i] != 0) {
        n++;
        i++;
    }
    return n;
}

