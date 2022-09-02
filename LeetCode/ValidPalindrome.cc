#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPalindrome(string s, int i, int j)
    {
        if(j == 0 && i == s.size()-1)
            return true;
        
        if(s[i] == s[j])
        {
            return checkPalindrome(s, ++i, --j);
        }

        if(s[i] != s[j])
            return false;
    }

    bool isPalindrome(string s) {
        string check;
        for(int i = 0;i<s.size();i++)
        {
            if((s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122) or (s[i]>=48 and s[i]<=57))
            {
                check.push_back(tolower(s[i]));
            }
        }

        stack<char> Stack;
        for(int i = 0;i<check.size();i++)
        {
            Stack.push(check[i]);
        }
        int i = 0;
        while(Stack.empty()!=true)
        {
            if(Stack.top()!=check[i])
                return false;
            Stack.pop();
            i++;
        }

        return true;
    }
};