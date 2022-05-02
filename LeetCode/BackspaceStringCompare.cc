#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> x,y;
        int i = 0, j = 0;
            
        for(i = 0;i<s.size();i++)
        {
            if(s[i]=='#'){
                if(x.empty())
                    continue;
                x.pop();
            }else{
                x.push(s[i]);
            }
        }
        for(j = 0;j<t.size();j++)
        {
            if(s[i]=='#'){
                if(y.empty())
                    continue;
                y.pop();
            }else{
                y.push(t[i]);
            }
        }

        return x==y;
    }
};