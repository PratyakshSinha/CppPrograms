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
};