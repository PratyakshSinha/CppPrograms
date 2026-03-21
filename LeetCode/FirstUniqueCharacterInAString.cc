#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        for(int i = 0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'a'] == 1)
                return i;
        }
        
        return -1;
    }

    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(int it = 0; it<s.size(); it++) {
            mp[it]++;
        }

        for(auto it : mp) {
            
        }

    }

};