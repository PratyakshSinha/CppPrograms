#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int ind, vector<vector<int>>& res, vector<int> nums, vector<int>& ds)
    {
        res.push_back(ds);
        for(int i = ind;i<nums.size();i++)
        {
            if(i != ind and nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            helper(i+1, res, nums, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> ds;
        helper(0, res, nums, ds);
        return res;
    }
};