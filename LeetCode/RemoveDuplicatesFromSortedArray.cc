#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> x;
        for(int i = 0;i<nums.size();i++)
        {
            x.insert(nums[i]);
        }
        set<int>::iterator itr = x.begin();
        for(int i = 0;i<x.size();i++)
        {
            nums[i] = *itr;
            itr++;
        }
        return x.size();
    }

    //O(1) space complexity approach
    int RemoveDuplicates(vector<int>& nums){
        int p1=0;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[p1]!=nums[i])
            {
                p1++;
                swap(nums[i], nums[p1]);
            }
        }
        return p1;
    }
};