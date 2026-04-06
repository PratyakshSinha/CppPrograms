#include <iostream>
#include <vector>

void dfs(std::vector<std::vector<char>>& grid, int row, int col){
    if(row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size()){
        return ;
    }
    if(grid[row][col] == '0') return;

    grid[row][col] = '0';

    dfs(grid, row+1, col);
    dfs(grid, row-1, col);
    dfs(grid, row, col+1);
    dfs(grid, row, col-1);
}

int numIslands(std::vector<std::vector<char>>& grid) {
    if(grid.empty() || grid[0].empty()) return 0;
    int res = 0;

    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[0].size(); j++){
            if(grid[i][j] == '1'){
                res++;
                dfs(grid, i, j);
            }
        }
    }
    return res;
}

int main() {
    std::vector<std::vector<char>> grid1 = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    std::cout << numIslands(grid1) << "\n"; // Expected: 1

    std::vector<std::vector<char>> grid2 = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };
    std::cout << numIslands(grid2) << "\n"; // Expected: 3

    return 0;
}