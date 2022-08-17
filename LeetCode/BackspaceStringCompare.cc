#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) { 
        string r1 = "", r2 = "";
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] >= 'a' and s[i]<='z')
            {
                r1+=s[i];
            }
            else if(!r1.empty())
                r1.pop_back();
        }
        for(int i = 0;i<t.size();i++)
        {
            if(t[i] >= 'a' and t[i]<='z')
            {
                r2+=t[i];
            }
            else if(!r2.empty())
                r2.pop_back();
        }
        
        return r1 == r2;
    }
};