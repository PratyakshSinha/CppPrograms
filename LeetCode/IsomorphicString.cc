#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        
        map<char, char> mST, mTS;
        
        for(int i = 0;i<s.size();i++)
        {
            if((mST.find(s[i]) != mST.end() and mST[s[i]] != t[i]) or (mTS.find(t[i]) != mTS.end() and mTS[t[i]] != s[i]))
                return false;

            mST[s[i]] = t[i];
            mTS[t[i]] = s[i];
        }

        return true;

    }
};