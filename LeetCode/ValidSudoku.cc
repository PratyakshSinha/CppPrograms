#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int root = sqrt(board.size());
        
        unordered_map<int, unordered_set<char>> hashTableRow; // key will be row index and value is unordered_set to check for duplicate values
        unordered_map<int, unordered_set<char>> hashTableColumn; // key will be columns index and value is unordered_set to check for duplicate values
        unordered_map<int, unordered_set<char>> hashTableBlock; // key will be index of smaller block
		/*
			index for smaller block is calculated as follows:
			dependancy on columns;
			for column 0 to 2 index will be 0;
			for column 3 to 5 index will be 1;
			for column 6 to 8 index will be 2;
			means, blockIndex increases by 1 after step of 3
			so we can write blockIndex = columnIndex/3
			
			dependancy on rows;
			for row 0 to 2 index will be 0;
			for row 3 to 5 index will be 3;
			for row 6 to 8 index will be 6;
			means, blockIndex increases by 3 after step of 3
			so we can write blockIndex = (rowIndex/3)  * 3
			
			hence blockIndex = ((rowIndex/3)  * 3) + (columnIndex/3)
			final blockIndex falls between 0 to 8
		*/
        for (int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[i].size(); j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
				
				// if value is already present return false
                if (!hashTableRow[i].insert(board[i][j]).second ||
                    !hashTableColumn[j].insert(board[i][j]).second ||
                    !hashTableBlock[((i/root) * root) + (j / root)].insert(board[i][j]).second)
                {
                    return false;
                }
            }
        }
        return true;
    }
};