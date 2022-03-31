#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int totalCost = 0, tempMin;
        for(int i = 0;i<costs.size();i++)
        {
            tempMin = *min_element(costs[i].begin(), costs[i].end());
            totalCost+=tempMin;
        }

        return totalCost;
    }
};