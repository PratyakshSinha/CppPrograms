#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int f(int i, int j, string& s, string& t, vector<vector<int>>& dp)
    {
        if(i==0) return j;
        if(j==0) return i;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i-1] == t[j-1])
            return dp[i][j] = f(i-1, j-1, s, t, dp);
        int ins = 1 + f(i, j-1, s, t, dp);
        int del = 1 + f(i-1, j, s, t, dp);
        int rep = 1 + f(i-1, j-1, s, t, dp);
        
        
        return dp[i][j] = min(ins, min(del, rep));
    }

    int minDistanceTab(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        //return f(n, m, s, t, dp);
        for(int i = 0;i<=n;i++) dp[i][0] = i;
        for(int j = 0;j<=m;j++) dp[0][j] = j;
        
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(s[i-1] == t[j-1])
                    dp[i][j] = 0 + dp[i-1][j-1];
                else{
                    int ins = 1 + dp[i][j-1];//f(i, j-1, s, t, dp);
                    int del = 1 + dp[i-1][j];//f(i-1, j, s, t, dp);
                    int rep = 1 + dp[i-1][j-1];//f(i-1, j-1, s, t, dp);
                    dp[i][j] = min(ins, min(del, rep));
                }
            }
        }
        return dp[n][m];
    }
    int minDistance(string s, string t)
    {
        int n = s.size();
        int m = t.size();

        vector<int> prev(m+1, 0), cur(m+1, 0);
        //return f(n, m, s, t, dp);
        for(int j = 0;j<=m;j++) prev[j] = j;
        
        for(int i = 1;i<=n;i++)
        {
            cur[0] = i;
            for(int j = 1;j<=m;j++)
            {
                if(s[i-1] == t[j-1])
                    cur[j] = 0 + prev[j-1];
                else{
                    //int ins = 1 + cur[j-1];//f(i, j-1, s, t, dp);
                    //int del = 1 + prev[j];//f(i-1, j, s, t, dp);
                    //int rep = 1 + prev[j-1];//f(i-1, j-1, s, t, dp);
                    cur[j] = 1 + min(prev[j], min(cur[j-1], prev[j-1]));
                }
            }
            prev = cur;
        }
        return prev[m];
    }
};