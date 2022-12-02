#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    long f(int ind, int buy, long* values, int n, vector<vector<long>>& dp)
    {
        if(ind == n)
            return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        long profit;
        if(buy)
        {
            profit = max((f(ind+1, 0, values, n, dp)-values[ind]), f(ind+1, 1, values, n, dp));
        }
        else
        {
            profit = max((values[ind] + f(ind+1, 1, values, n, dp)), f(ind+1, 0, values, n, dp));
        }
        return dp[ind][buy] = profit;
    }

    long maxProfitTab(vector<int>& values, int n)
    {
        vector<vector<long>> dp(n+1, vector<long>(2, 0));
        //return f(0, 1, values, n, dp);
        dp[n][0] = dp[n][1] = 0;
    
        for(int ind = n-1;ind>=0;ind--)
        {
            for(int buy = 1;buy>=0;buy--)
            {
                long profit = 0;
                if(buy)
                {
                    profit = max((dp[ind+1][0]-values[ind]), dp[ind+1][1]);
                }
                else
                {
                    profit = max((values[ind] + dp[ind+1][1]), dp[ind+1][0]);
                }
                dp[ind][buy] = profit;
            }
        }
        return dp[0][1];
    }

    int maxProfit(vector<int>& values) {
        vector<long> ahead(2,0), cur(2,0);
        //return f(0, 1, values, n, dp);
        ahead[0] = ahead[1] = 0;
        int n = values.size();
        for(int ind = n-1;ind>=0;ind--)
        {
            for(int buy = 1;buy>=0;buy--)
            {
                long profit = 0;
                if(buy)
                {
                    profit = max((ahead[0]-values[ind]), ahead[1]);
                }
                else
                {
                    profit = max((values[ind] + ahead[1]), ahead[0]);
                }
                cur[buy] = profit;
            }
            ahead = cur;
        }
        return ahead[1];
    }

    // int maxProfit(vector<int>& prices) {
    //     int profit = 0;
    //     for(int i = 0;i<prices.size()-1;i++)
    //     {
    //         if(prices[i]<prices[i+1])
    //         {
    //             int temp = prices[i+1]-prices[i];
    //             profit+=temp;
    //         }
    //     }
    //     return profit;
    // }

};