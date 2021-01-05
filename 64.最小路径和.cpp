/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        if(rows == 0 or columns == 0)
            return 0;
        vector<vector<int>>com(rows, vector<int>(columns));
        com[0][0] = grid[0][0];

        for(int i = 1; i < rows; i++){
            com[i][0] += com[i-1][0] + grid[i][0];
        }

        for(int i = 1; i < columns; i++){
            com[0][i] = com[0][i-1] + grid[0][i];
        }
        for(int i = 1; i < rows; i++){
            for(int j = 1; j < columns; j++){
                com[i][j] = min(com[i-1][j], com[i][j-1]) + grid[i][j];
            }
        }
        return com[rows-1][columns-1];

    }
};
// @lc code=end

