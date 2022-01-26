#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min = *min_element(prices.begin(), prices.end());
        int pos = distance(prices.begin(), min_element(prices.begin(), prices.end()));

        if(min == prices[prices.size()-1])
            return 0;
        
        int profit = 0;

        for (int i = pos; i < *prices.end(); i++)
        {
            if(prices[i]-min>profit)
                profit = prices[i] - min;
        }
        
        return profit;
    }
};