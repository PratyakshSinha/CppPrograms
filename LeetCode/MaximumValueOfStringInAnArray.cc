#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool checker(string s)
    {
        for(int i = 0;i<s.size();i++)
        {
            if(isalpha(s[i]))
                return true;
        }
        return false;
    }
    
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN;
        for(int i = 0;i<strs.size();i++)
        {
            int len = strs[i].size();
            if(checker(strs[i]))
                maxi = max(maxi, len);
            else
                maxi = max(maxi, stoi(strs[i]));
        }
        return maxi;
    }
};