#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> res;

    void dfs(int i, vector<int> cur, int total, vector<int>& candidates, int& target)
    {
        if(total == target)
        {
            res.push_back(cur);
            return;
        }
        
        if(i>=candidates.size() or total>target)
            return;
        
        cur.push_back(candidates[i]);
        dfs(i, cur, total + candidates[i], candidates, target);
        cur.pop_back();
        dfs(i+1, cur, total, candidates, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        dfs(0, cur, 0, candidates, target);
        return res;
    }
};