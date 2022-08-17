#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size()<p.size())
            return ans;
        map<char, int> mp;
        map<char, int> mp1;
        for(auto it: p)
            mp[it]++;
        int j = 0;
        for(int i = 0;i<s.size();i++)
        {
            while(j<s.size() && mp1[s[j]]<mp[s[j]])
            {
                mp1[s[j]]++;
                j++;
            }
            if(mp == mp1)
                ans.push_back(i);
            mp1[s[i]]--;
            if(mp[s[i]] == 0) mp.erase(s[i]);
        }

        return ans;
    }
};