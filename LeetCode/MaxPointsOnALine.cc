#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*      // Right Idea but wrong solution 
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
    */
    // According to constraint we are allowed with maximum time complexity of O(n^3)
    // 1 <= points.length <= 300
    ///////   All the points are unique.
    int maxPoints(vector<vector<int>>& points) {
        
        if(points.size()<=2) return points.size(); // only two points are always on the same line, beacuse using 2 points
                                                    // line is made
        int res = 0;
        for(int i = 0; i < points.size(); i++)
        {
            unordered_map<double, int> mp;
            int duplicate = 0;
            double slope = 0.0;
            for(int j = 0; j < points.size(); j++)
            {
                int x1 = points[i][0];
                int x2 = points[j][0];
                int y1 = points[i][1];
                int y2 = points[j][1];    
                
                // slope = dy/dx.
                int dy = y2 - y1;
                int dx = x2 - x1;
                if(dy == 0 && dx == 0){  // same overlapping point --> consider 2 same point as single point
                    duplicate++; 
                    continue;
                }
                
                if(dx != 0)
                    slope = dy*1.0/dx; // store in double
                else // dx==0 means slope is infinity
                    slope = INT_MAX;
                
                mp[slope]++;
            }

            if(mp.size() == 0)
                res = duplicate;
            else
            {
                for(auto slope : mp){
                    
                    res = max(res, slope.second + duplicate);
                }
            }
        }
        return res;
    }
};