#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void setZero(vector<vector<int>>& arr, int i, int j)
    {
        for(int a = 0;a<arr[0].size();a++)
        {
            arr[i][a] = 0;
        }

        for(int a = 0;a<arr.size();a++)
        {
            arr[a][j] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int, int>> mp;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                    mp.push_back({i, j});
            }
        }
        for(auto it: mp)
        {
            setZero(matrix, it.first, it.second);
        }
    }
};