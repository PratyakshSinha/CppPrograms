#include<bits/stdc++.h>
using namespace std;

int getMaxColors(vector<int> prices, int money){
    int sum = 0, i;
    sort(prices.begin(), prices.end());
    for(i = 0;i<prices.size();i++)
    {
        sum = sum + prices[i];
        if(sum>money)
        {
            sum = sum - prices[i];
            break;
        }
    }

    return i;
}