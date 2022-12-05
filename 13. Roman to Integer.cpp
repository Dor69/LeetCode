#include "string.h"
class Solution {
public:
    int romanToInt(string s) {
        char *p = (char *)s.c_str();
        int len = s.length();
        int sum = 0;
        for (int i = 0; i < len; i++) {
            if (p[i] == 'I') {
                if (p[i + 1] == 'V') {
                    sum += 4;
                    i++;
                } else if (p[i + 1] == 'X') {
                    sum += 9;
                    i++;
                } else {
                    sum += 1;
                }
            } else if (p[i] == 'V') {
                sum += 5;
            } else if (p[i] == 'X') {
                if (p[i + 1] == 'L') {
                    sum += 40;
                    i++;
                } else if (p[i + 1] == 'C') {
                    sum += 90;
                    i++;
                } else {
                    sum += 10;
                }
            } else if (p[i] == 'L') {
                sum += 50;
            } else if (p[i] == 'C') {
                if (p[i + 1] == 'D') {
                    sum += 400;
                    i++;
                } else if (p[i + 1] == 'M') {
                    sum += 900;
                    i++;
                } else {
                    sum += 100;
                }
            } else if (p[i] == 'D') {
                sum += 500;
            } else if (p[i] == 'M') {
                sum += 1000;
            }
        }

       return sum; 
    }
};