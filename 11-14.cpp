#include <iostream>
#include <string>
#include "middle_str.h"
using namespace std;

bool itc_isIp(string str) {
    if (str[0] == '.' || str[len1(str) - 1] == '.') return false;
    str = str + '.';
    int dotcount = 0;
    for (int i = 0; i < len1(str); i++) {
        if (str[i] == '.' && str[i + 1] == '.') return false;
        if (str[i] == '.') dotcount += 1;
    }
    if (dotcount != 4) return 0;

    for (int i = 0; i < len1(str); i++) {
        string str2 = "";
        while (str[i] != '.') {
            str2 += str[i];
            i++;
        }
        cout << str2 << " ";
        if (len1(str2) > 3) return false;
        int n = 0;
        for(int i = 0; i < len1(str2); i++)
            n = n * 10 + (str2[i] - '0');
        if (n < 0 || n > 255) return false;
    }
    return true;
}
