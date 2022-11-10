#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
int recursion(int m, int n)
{
    //Simple Recursive Solution
    if(m == 0 and n == 0)
        return 1;
    if(m < 0 or n < 0)
        return 0;
    int up = recursion(m-1, n);
    int left = recursion(m, n-1);
    return up + left;
}

int memoized(int m, int n, vector<vector<int>>& dp)
{
    //Memoized solution
    if(m == 0 and n == 0)
        return 1;
    if(m < 0 or n < 0)
        return 0;
    if(dp[m][n]!=-1)
        return dp[m][n];
    int up = memoized(m-1, n, dp);
    int left = memoized(m, n-1, dp);
    dp[m][n] = up + left;
    return dp[m][n];
}

int uniquePaths(int m, int n) {
    //Tabulated Solution;
    int dp[m][n];
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(i == 0 and j == 0)
                dp[i][j] = 1;
            else{
                int up = 0, left = 0;
                if(i>0)
                    up = dp[i-1][j];
                if(j>0)
                    left = dp[i][j-1];
                dp[i][j] = up + left;    
            }
        }
    }
    return dp[m-1][n-1];
    // Can be further Space Optimized but not necessary
}