#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while(j<t.size() and i<s.size()) 
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        if(i == s.size())
            return true;

        return false;
    }
};
