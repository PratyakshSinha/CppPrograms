#include<bits/stdc++.h>
using namespace  std;;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        char temp;
        for(int i = 0;i<s.size();i++)
        {
            parentheses.push(s[i]);
        }
        for(int i = 0;i<s.size();i++)
        {
            temp = parentheses.pop();
        }
    }
};