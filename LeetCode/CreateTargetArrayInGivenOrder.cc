#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> targetArray;
        for(int i = 0;i<nums.size();i++)
        {
            targetArray.insert(targetArray.begin()+index[i], nums[i]);
        }
        return targetArray;
    }
};