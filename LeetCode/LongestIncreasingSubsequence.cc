#include<bits/stdc++.h>>
using namespace std;

class Solution {
public:

    int f(int ind, int prev, vector<int>& arr, int n, vector<vector<int>>& dp)
    {
        if(ind == n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev + 1];
        int len = f(ind + 1, prev, arr, n, dp);
        if(prev == -1 or arr[ind]>arr[prev])
            len = max(len,1 + f(ind + 1, ind, arr, n, dp));
        return dp[ind][prev+1] = len;
    }

    int lengthOfLISTab(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        //return f(0, -1, arr, n, dp);
        for(int ind = n-1;ind>=0;ind--)
        {
            for(int prev = ind-1; prev>=-1;prev--)
            {
                int len = dp[ind + 1][prev+1];
                if(prev == -1 or arr[ind]>arr[prev])
                    len = max(len,1 + dp[ind + 1][ind+1]);
                dp[ind][prev+1] = len;
            }
        }
        return dp[0][-1+1];
    }

    int lengthOfLISSO(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, 1);
        int maxi = 1;
        //return f(0, -1, arr, n, dp);
        for(int ind = 0;ind<n;ind++)
        {
            for(int prev = 0; prev<ind;prev++)
            {
                if(arr[prev]<arr[ind])
                    dp[ind] = max(dp[ind], 1+dp[prev]);
            }
            maxi = max(maxi, dp[ind]);
        }
        return maxi;
    }
    int lengthOfLIS(vector<int>& arr)
    {
        int n = arr.size();
        vector<int> temp;
        temp.push_back(arr[0]);
        for(int i = 1;i<n;i++)
        {
            if(arr[i]>temp.back())
                temp.push_back(arr[i]);
            else
            {
                int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
                temp[ind] = arr[i];
            }
        }
        return temp.size();
    }

    int PrintLIS(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, 1), hash(n);
        int maxi = 1;
        int last = 0;
        //return f(0, -1, arr, n, dp);
        for(int ind = 0;ind<n;ind++)
        {
            hash[ind] = ind;
            for(int prev = 0; prev<ind;prev++)
            {
                if(arr[prev]<arr[ind] and 1+dp[prev]>dp[ind])
                    dp[ind] = 1+dp[prev];
                    hash[ind] = prev;
            }
            if(dp[ind]>maxi)
            {
                maxi = dp[ind];
                last = ind;
            }
        }
        int lis[maxi];
        int index = 1;
        lis[0] = arr[last];
        while(hash[last]!=last)
        {
            last = hash[last];
            lis[index++] = arr[last]; 
        }
        reverse(lis, lis + maxi);
        return maxi;
    }
};