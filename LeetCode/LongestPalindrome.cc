    #include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        for(int i = 0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int result = 0;
        for(auto it : mp)
        {
            result+=it.second/2 * 2;
            if(result % 2 == 0 and it.second%2 == 1)
            {
                result++;
            }
        } 
        return result;
    }
};