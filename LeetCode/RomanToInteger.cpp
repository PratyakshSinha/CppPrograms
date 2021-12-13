#include<iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int intValue = 0;
        for(int i = 0; i<s.length();i++)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                    intValue = intValue*10 + 4;
                else if(s[i+1]=='X')
                    intValue = intValue*10 + 9;
                else
                    intValue = intValue*10 + 1;
            }
            else if(s[i]=='V')
            {
                intValue = intValue*10;
            }
        }
    }
};