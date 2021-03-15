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
        vector<int>dp(columns, 0);
        dp[0] = grid[0][0];
        for(int i = 1; i < columns; i++)
        {
            dp[i] = dp[i-1]+grid[0][i];
        }
        for(int i = 1; i < rows; i++)
        {
            dp[0] += grid[i][0];
            for(int j = 1; j < columns; j++)
            {
                dp[j] = min(dp[j-1]+grid[i][j], dp[j]+grid[i][j]);
            }
        }
        return dp[columns-1];
    }
};
// @lc code=end

