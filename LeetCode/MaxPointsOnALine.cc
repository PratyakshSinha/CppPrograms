#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    pair<int, int> findLine(int x0, int y0, int x1, int y1)
    {
        if(y0 == y1)
            return make_pair(0, y0);
        if(x0 == x1)
            return make_pair(x0, INT_MIN);
        
        int slope = (y1 - y0)/(x1 - x0);
        int intercept  = y0 - (slope * x0);
        return make_pair(slope, intercept);
    }

    int maxPoints(vector<vector<int>>& points) {
        if(points.size() == 1)
            return 1;
        map<pair<int, int>, set<pair<int, int>>> mp;
        int x0, x1, y0, y1;
        for(int i = 0;i<points.size();i++)
        {
            for(int j = i+1;j<points.size();j++)
            {
                x0 = points[i][0]; y0 = points[i][1];
                x1 = points[j][0]; y1 = points[j][1];
                pair<int, int> temp = findLine(x0, y0, x1, y1);
                mp[temp].insert(make_pair(x0, y0));
                mp[temp].insert(make_pair(x1, y1));
            }
        }
        int res = INT_MIN;
        for(auto it: mp)
        {
            int tp = it.second.size();
            res = max(res, tp);
        }
        return res;
    }
};