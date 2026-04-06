#include <iostream>
#include <vector>
#include <string>

bool backtrack(std::vector<std::vector<char>>& board, std::string word, std::vector<std::vector<bool>>& visited, int i, int j, int wordPtr){
    if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || visited[i][j]){
        return false;
    }
    if(board[i][j] != word[wordPtr]){
        return false;
    }

    if(wordPtr == word.size()-1){
        return true;
    }

    visited[i][j] = true;
    auto next = wordPtr + 1;
    auto result = backtrack(board, word, visited, i+1, j, next) || backtrack(board, word, visited, i-1, j, next) || backtrack(board, word, visited, i, j+1, next) || backtrack(board, word, visited, i, j-1, next);
    visited[i][j] = false;
    return result;
}

bool exist(std::vector<std::vector<char>>& board, std::string word, int i = 0, int j = 0, int wordPtr = 0) {
    bool res = false;
    std::vector<std::vector<bool>> visited(board.size(), std::vector<bool>(board[0].size(), false));
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            res = res || backtrack(board, word, visited, i, j, 0);
            if(res){
                break;
            }
        }
    }
    
    return res;
}

int main() {
    std::vector<std::vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    std::cout << exist(board, "ABCCED") << "\n"; // Expected: 1
    std::cout << exist(board, "SEE") << "\n";    // Expected: 1
    std::cout << exist(board, "ABCB") << "\n";   // Expected: 0

    return 0;
}