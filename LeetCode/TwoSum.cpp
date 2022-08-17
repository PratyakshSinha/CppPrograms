#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> answer;
        answer.reserve(2);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i = 0;i<nums.size();i++)
        {
            mp[nums[i]] = i;
        }
        vector<int> res;
        for(int i =0;i<nums.size();i++)
        {
            int complement = target - nums[i];
            if((mp.find(complement)!=mp.end()) and (mp[complement]!=i))
            {
                res.push_back(i);
                res.push_back(mp[complement]);
                return res;
            }
        }
        return res;
    }

    
};