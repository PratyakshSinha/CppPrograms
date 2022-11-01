#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int rows, int cols, int source)
    {
        if(sr<0 or sr>=rows or sc<0 or sc>=cols)
            return;
        else if(image[sr][sc] != source)
            return;
        
        image[sr][sc] = color;

        dfs(image, sr-1, sc, color, rows, cols, source);
        dfs(image, sr+1, sc, color, rows, cols, source);
        dfs(image, sr, sc-1, color, rows, cols, source);
        dfs(image, sr, sc+1, color, rows, cols, source);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        int rows = image.size();
        int cols = image[0].size();
        int source = image[sr][sc];

    }
};