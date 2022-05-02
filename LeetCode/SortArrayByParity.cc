#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> x, y;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                x.push_back(nums[i]);
            else
                y.push_back(nums[i]);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        for(int i = 0;i<y.size();i++)
        {
            x.push_back(y[i]);
        }
        return x;
    }
};