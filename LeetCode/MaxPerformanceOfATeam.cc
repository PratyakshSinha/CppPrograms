#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        //Still  dont know why map solution dont work
        // map<int, int, greater<int>> mp;
        // for(int i = 0;i<n;i++)
        // {
        //     mp[efficiency[i]] == speed[i]; 
        // }
        // int res = 0, speedSum = 0;
        // priority_queue<int, vector<int>, greater<int>> pq;
        // for(auto it:mp)
        // {
        //     if(pq.size() == k)
        //     {
        //         speedSum -= pq.top();
        //         pq.pop();
        //     }
        //     speedSum += it.second;
        //     pq.push(it.second);
        //     res = max(res, it.first * speedSum);
        // }
        // int mod = 7 + pow(10, 9);
        // return res % mod;

        vector<pair<int, int>> mp;
        for(int i = 0;i<n;i++)
        {
            mp.push_back({efficiency[i], speed[i]}); 
        }
        sort(mp.rbegin(), mp.rend());
        long res = 0, speedSum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto it:mp)
        {
            if(pq.size() == k)
            {
                speedSum -= pq.top();
                pq.pop();
            }
            speedSum += it.second;
            pq.push(it.second);
            res = max(res, it.first * speedSum);
        }
        int mod = 7 + pow(10, 9);
        return res % mod;
    }
};