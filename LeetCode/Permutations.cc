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

    void helper1(int ind, vector<int>& nums, vector<vector<int>>& ans)
    {
        if(ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i = ind;i<nums.size();i++)
        {
            swap(nums[ind], nums[i]);
            helper1(ind+1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }

    vector<vector<int>> permute1(vector<int>& nums)
    {
        vector<vector<int>> ans;
        helper1(0, nums, ans);
        return ans;
    }
};