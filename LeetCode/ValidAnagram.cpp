#include <bits/stdc++.h>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> mp1, mp2;
        if(s.size() != t.size())
            return false;

        for(int i = 0; i < s.size(); i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        return mp1 == mp2;
    }
};