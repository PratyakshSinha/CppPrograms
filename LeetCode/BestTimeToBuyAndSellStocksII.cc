#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                int temp = prices[i+1]-prices[i];
                profit+=temp;
            }
        }
        return profit;
    }
};