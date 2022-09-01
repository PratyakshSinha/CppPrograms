#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0 or nums.size() == 1)
            return;
        int i = 0, j =0;
        while(i<nums.size())
        {
            if(nums[i] == 0)
            {
                i++;
            }
            else
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};