#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x, y, result;
        for(int i = 0;i<2*n;i++)
        {
            if(i<n)
                x.push_back(nums[i]);
            else
                y.push_back(nums[i]);
        }
        for(int i = 0;i<2*n;i++)
        {
            if(i%2==0)
                result.push_back(x[i/2]);
            else
                result.push_back(y[i/2]);
        }

        return result;
    }
};