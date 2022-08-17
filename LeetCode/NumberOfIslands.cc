#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void mark_current_island(vector<vector<char>>& grid, int x, int y, int r, int c)
    {
        if(x<0 or x>=r or y<0 or y>=c or grid[x][y]!='1')
            return;

        grid[x][y] = '2';

        mark_current_island(grid, x+1, y, r, c);
        mark_current_island(grid, x, y+1, r, c);
        mark_current_island(grid, x-1, y, r, c);
        mark_current_island(grid, x, y-1, r, c);
    }

    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int rows = grid.size();
        if(rows==0)
            return 0;
        
        int cols = grid[0].size();

        int islands = 0;
        for(int i = 0;i<rows;i++)
        {
            for(int j = 0;j<cols;j++)
            {
                if(grid[i][j] == '1')
                {
                    mark_current_island(grid, i, j, rows, cols);
                    islands++;
                }
            }
        }
        return islands;
    }
};