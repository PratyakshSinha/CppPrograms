#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m1, m2;
        for(int i = 0;i<s.size();i++)
            m1[s[i]]++;
        for(int i = 0;i<t.size();i++)
            m2[t[i]]++;
        
        return m1==m2;
    }
};