#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int> sol;
        int solution = 0;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = 0;j<nums.size();j++)
            {
                if(i!=j)
                    sol.insert(pair<int,int>(nums[i],nums[j]));
            }
        }

        for(auto pair: sol)
        {
            if(pair.first == pair.second)
                solution++;
        }

        return solution;
    }
};