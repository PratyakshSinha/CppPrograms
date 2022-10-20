#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int ind, vector<vector<int>>& res, vector<int>& ds, vector<int>& cd, int target)
    {
        if(target == 0)
        {
            res.push_back(ds);
            return;
        }

        for(int i = ind; i<cd.size();i++)
        {
            if(i>ind and cd[i] == cd[i-1]) continue;
            if(cd[i]>target) break;

            ds.push_back(cd[i]);
            helper(i+1, res, ds, cd, target-cd[i]);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        helper(0, res, ds, candidates, target);
        return res;
    }
};