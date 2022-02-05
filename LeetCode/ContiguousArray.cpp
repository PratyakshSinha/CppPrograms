#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int counter1 = 0, counter0 = 0;
        for (int i = 0;i<nums.size();i++)
        {
            if(nums[i]==0)
                counter0++;
            else
                counter1++;
        }

        if(counter0<counter1)
            return counter0*2;
        
        return counter1*2;

    }
};