/*
 * @lc app=leetcode.cn id=931 lang=cpp
 *
 * [931] 下降路径最小和
 */

// @lc code=start
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<vector<int>>dp(2, vector<int>(columns, 0));
        dp[0] = matrix[0];
        for(int i = 1; i < rows; i++){
            dp[1][0] = min(dp[0][0], dp[0][1]) + matrix[i][0];
            dp[1][columns-1] = min(dp[0][columns-1], dp[0][columns-2]) + matrix[i][columns-1];
            for(int j = 1; j < columns-1; j++){
                dp[1][j] = min(min(dp[0][j-1], dp[0][j]), dp[0][j+1]) + matrix[i][j];
            }
            dp[0] = dp[1];
        }
        int min_val = INT_MAX;
        for(auto num : dp[0]){
            min_val = min(min_val, num);
        }
        return min_val;

    }
};
// @lc code=end

