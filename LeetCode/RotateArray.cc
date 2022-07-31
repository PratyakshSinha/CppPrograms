#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);    
        reverse(nums.begin()+k+1, nums.end());
        for(int i = 0;i<nums.size();i++)
            cout<<nums[i];    
    }
};