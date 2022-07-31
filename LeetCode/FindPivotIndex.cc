#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lSum = 0;
        int rSum = 0;
        for(int i = 0;i<nums.size();i++)
            rSum += nums[i];
        
        for(int i=0;i<nums.size();i++)
        {
            rSum=rSum-nums[i];

            if(rSum==lSum)
            {
                return i;
            }
            else
            {
                lSum=lSum+nums[i];
            }
        }
        return -1;
    }

    //Another Approach

    int PivotIndex(vector<int>& nums)
    {
        vector<int> prefix(nums.size()), suffix(nums.size());
        prefix[0] = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            prefix[i] = prefix[i-1] + nums[i];
        }
        suffix[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2;i>=0;i--)
        {
            suffix[i] = suffix[i+1] + nums[i];
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(prefix[i] == suffix[i])
                return i;
        }

        return -1;
    }
};