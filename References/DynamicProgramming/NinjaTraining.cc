#include<bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>>& points, int ind, int last, vector<vector<int>>& dp)
{
    if(ind == 0)
    {
        int maxi = 0;
        for(int i = 0;i<3;i++)
        {
            if(i!=last)
                maxi = max(maxi, points[0][i]);
        }
        return maxi;
    }
    if(dp[ind][last]!=-1) 
        return dp[ind][last];
    int maxi = 0;
    for(int i = 0;i<3;i++)
    {
        if(i!=last)
        {
            int point = points[ind][i] + helper(points, ind-1, i,dp);
            maxi = max(maxi, point);
        }   
    }
    dp[ind][last] = maxi;
    return dp[ind][last];
}

int ninjaTrainingTabulated(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4,0));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));
    for(int day = 1;day<n;day++)
    {
        for(int last = 0;last<4;last++)
        {
            //dp[day][last] = 0;
            for(int task = 0;task<3;task++)
            {
                if(task!=last){
                    int point = points[day][task] + dp[day-1][task];
                    dp[day][last] = max(dp[day][last], point);
                }
            }
        }
    }
    return dp[n-1][3];
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    //space optimized approach
    vector<int> prev(4,0);
    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);
    prev[3] = max(points[0][0], max(points[0][1], points[0][2]));
    for(int day = 1;day<n;day++)
    {
        vector<int> temp(4,0);
        for(int last = 0;last<4;last++)
        {
            for(int task = 0;task<3;task++)
            {
                if(task!=last){
                    temp[last] = max(temp[last], points[day][task] + prev[task]);
                }
            }
        }
        prev = temp;
    }
    return prev[3];
}