#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
       vector<vector<int>> ret;
        map<int, int> mp;
        for(auto it: items1)
        {
            mp[it[0]] = it[1];
        }

        for(auto itr: items2)
        {
            mp[itr[0]]+=itr[1];
        }
        for(auto it: mp)
        {
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            ret.push_back(temp);
        }

        return ret;
    }
};