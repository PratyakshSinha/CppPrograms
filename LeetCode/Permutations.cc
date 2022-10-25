#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(vector<int> nums, vector<vector<int>>& res, vector<int>& ds, int freq[])
    {
        if(ds.size() == nums.size())
        {
            res.push_back(ds);
            return;
        }

        for(int i = 0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                freq[i] = 1;
                ds.push_back(nums[i]);
                helper(nums, res, ds, freq);
                ds.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        int freq[nums.size()];
        for(int i = 0;i<nums.size();i++) freq[i] = 0;
        helper(nums, res, ds, freq);
        return res;
    }
};