#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int i, int j, string t, string s, vector<vector<int>>& dp)
    {
        if(j == 0)
            return 1;
        if(i == 0)
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(t[i-1] == s[j-1])
        {
            return dp[i][j] = (f(i-1, j-1, t, s, dp) + f(i-1, j, t, s, dp));
        
        }
        else
            return dp[i][j] = f(i-1, j, t, s, dp);
    }

    int numDistinctTab(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<unsigned long long int>> dp(n+1, vector<unsigned long long int>(m+1, 0));
        //return f(n, m, s, t, dp);
        for(int i = 0;i<=n;i++)
        {
            dp[i][0] = 1;
        }
        for(int j = 1;j<=m;j++)
        {
            dp[0][j] = 0;
        }
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][m];
    }

    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<unsigned long long int> prev(m+1, 0);
        prev[0] = 1;
        for(int i = 1;i<=n;i++)
        {
            for(int j = m;j>=1;j--)
            {
                if(s[i-1] == t[j-1])
                {
                    prev[j] = prev[j-1] + prev[j];
                }
            }
        }
        return prev[m];
    }
};