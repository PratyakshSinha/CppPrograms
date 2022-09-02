#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0 or s.size() == 1)
            return;
        for(int i = 0;i<(s.size()/2);i++)
        {
            swap(s[i], s[s.size()-1-i]);
        }
    }
};