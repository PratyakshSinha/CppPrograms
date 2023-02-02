#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool dfs(vector<vector<char>> &board, string &word, int i, int j, int k) {
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[k]) {
        return false;
    }
    if (k == word.size() - 1) {
        return true;
    }
    char c = board[i][j];
    board[i][j] = '#';
    for (auto &dir : dirs) {
        int x = i + dir.first, y = j + dir.second;
        if (dfs(board, word, x, y, k + 1)) {
            return true;
        }
    }
    board[i][j] = c;
    return false;
}

bool exist(vector<vector<char>> &board, string word) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (dfs(board, word, i, j, 0)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<char>> board;
    string row;
    while (cin >> row) {
        board.push_back({row.begin(), row.end()});
    }
    string word;
    cin >> word;
    if (exist(board, word)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
