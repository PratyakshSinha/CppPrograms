#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(int it;it<nums.size();it++)
        {
            result[it] = nums[nums[it]];
        }
        return result;
    }
};