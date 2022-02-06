#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string rev;
        for (int i = 0; i < words.size(); i++)
        {
            rev = string(words[i].rbegin(),words[i].rend());
            if(words[i]==rev)
                return words[i];
        }
        return "";
    }
};