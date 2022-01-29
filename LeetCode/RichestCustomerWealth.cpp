#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int max = 0, i, j, temp = 0;

        for(i=0;i<accounts.size();i++)
        {
            for(j=0;j<accounts[i].size();j++)
            {
                temp = temp+accounts[i][j];
            }
            if(temp>max)
                max = temp;
            temp = 0;
        }
        
        return max;
    }
};