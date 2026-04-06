#include <iostream>
#include <vector>

void dfs(int row, int col, std::vector<std::vector<bool>>& visited, std::vector<std::vector<int>>& heights){
    visited[row][col] = true;
    if((row-1 >= 0) && 
        !visited[row-1][col] && 
        heights[row-1][col] >= heights[row][col]){
        dfs(row-1, col, visited, heights);
    }
    if(row + 1 < heights.size() && 
        !visited[row+1][col] && 
        heights[row+1][col] >= heights[row][col]){
        dfs(row+1, col, visited, heights);
    }
    if((col-1 >= 0) && 
        !visited[row][col-1] && 
        heights[row][col-1] >= heights[row][col]){
        dfs(row, col-1, visited, heights);
    }
    if(col + 1 < heights[0].size() && 
        !visited[row][col+1] && 
        heights[row][col+1] >= heights[row][col]){
        dfs(row, col+1, visited, heights);
    }
}

std::vector<std::vector<int>> pacificAtlantic(std::vector<std::vector<int>>& heights) {
    if(heights.empty()){
        return {};
    }

    int rows = heights.size();
    int cols = heights[0].size();

    std::vector<std::vector<bool>> atlantic(rows, std::vector<bool>(cols, false));
    std::vector<std::vector<bool>> pacific(rows, std::vector<bool>(cols, false));

    for(int col = 0; col < cols; col++){
        dfs(0, col, pacific, heights);
        dfs(rows-1, col, atlantic, heights);
    }

    for(int row = 0; row < rows; row++){
        dfs(row, 0, pacific, heights);
        dfs(row, cols-1, atlantic, heights);
    }

    std::vector<std::vector<int>> res;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++){
            if(pacific[i][j] && atlantic[i][j]){
                res.push_back({i,j});
            }
        }
    }

    return res;
}

int main() {
    std::vector<std::vector<int>> heights = {
        {1,2,2,3,5},
        {3,2,3,4,4},
        {2,4,5,3,1},
        {6,7,1,4,5},
        {5,1,1,2,4}
    };

    auto result = pacificAtlantic(heights);
    // for(auto& p : result)
    //     std::cout << "[" << p << "] ";
    std::cout << "\n";

    return 0;
}