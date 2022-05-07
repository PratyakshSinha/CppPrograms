#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> result;
        int counter = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(result.find(nums[i])==result.end())
            {
                result[nums[i]] = 1;
            }
            else
            {
                counter+=result[nums[i]];
                result[nums[i]]++;
            }
        }

        return counter;
    }

    /*
    int numIdenticalPairs(vector<int>& nums) {
        int total = 0;
        map<int,int> mp;
        for(int i = 0;i<nums.size();i++)
        {
            total+=mp[nums[i]];
            mp[nums[i]]++;
        }
        return total;
    }
    */
};