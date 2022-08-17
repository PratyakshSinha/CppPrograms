#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> sc, gu;
        int bulls = 0, cows = 0;
        for(int i = 0;i<10;i++)
        {
            sc[i] = 0;
            gu[i] = 0;
        }
        for(int i = 0;i<secret.size();i++)
        {
            if(secret[i] == guess[i])
                bulls++;
            else
            {
                sc[secret[i]]++;
                gu[guess[i]]++;
            }
        }
        for(int i = 0;i<10;i++)
        {
            cows+=min(sc[i], gu[i]);
        }
        string ans = "";
        ans+=to_string(bulls);
        ans+="A";
        ans+=to_string(cows);
        ans+="B";
        return ans;
    }
};