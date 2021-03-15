/*
 * @lc app=leetcode.cn id=221 lang=cpp
 *
 * [221] 最大正方形
 */

// @lc code=start
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<vector<int>>dp(rows, vector<int>(columns));
        int max_cur = 0;
        for(int i = 0; i < rows; i++){
            dp[i][0] = matrix[i][0]-'0';
            max_cur = max(max_cur, dp[i][0]);
        }
        for(int j = 0; j < columns; j++){
            dp[0][j] = matrix[0][j]-'0';
            max_cur = max(max_cur, dp[0][j]);
        }
        for(int i = 1; i < rows; i++){
            for(int j = 1; j < columns; j++){
                if(matrix[i][j] == '1')
                {
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
                    max_cur = max(max_cur, dp[i][j]);
                }
            }
        }
        return max_cur*max_cur;


    }
};
// @lc code=end

