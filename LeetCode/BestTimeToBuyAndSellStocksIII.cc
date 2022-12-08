#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int ind, int buy, int cap, int n, vector<int>& prices, vector<vector<vector<int>>>& dp)
    {
        if(cap==0 or ind == n)
            return 0;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        if(buy)
        {
            return dp[ind][buy][cap] = max((-prices[ind] + f(ind+1, 0, cap, n, prices, dp)), f(ind+1, 1, cap, n, prices, dp));
        }
        else
        {
            return dp[ind][buy][cap] = max((prices[ind] + f(ind+1, 1, cap-1, n, prices, dp)), f(ind+1, 0, cap, n, prices, dp));
        }
    }

    int maxProfit(vector<int>& prices)
    {
        int cp = 3;
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, 0)));
        //return f(0, 1, 2, n, prices, dp);
        for(int ind = n-1;ind>=0;ind--)
        {
            for(int buy = 0;buy<=1;buy++)
            {
                for(int cap = 1;cap<=2;cap++)
                {
                    if(buy)
                    {
                        dp[ind][buy][cap] = max(-prices[ind] + dp[ind+1][0][cap], dp[ind+1][1][cap]);
                    }
                    else
                    {
                        dp[ind][buy][cap] = max((prices[ind] + dp[ind+1][1][cap-1]), dp[ind+1][0][cap]);
                    }
                }
            }
        }
        return dp[0][1][2];
    }
};