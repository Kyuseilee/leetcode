/*
 * @lc app=leetcode.cn id=935 lang=cpp
 *
 * [935] 骑士拨号器
 */

// @lc code=start
class Solution {
public:
    int knightDialer(int n) {
        int sum = 0, mod = 1000000007;
        vector<vector<int>>dp(10, vector<int>(n, 0));
        for(int i = 0; i < 10; i++){
            dp[i][0] = 1;
        }
        vector<vector<int>>ref = {{4,6}, {6,8}, {7,9}, {4,8}, {3, 9, 0}, {}, {1, 7, 0}, {2, 6}, {1,3}, {2,4}};
        for(int j = 1; j < n; j++){
            for(int i = 0; i < 10; i++){
                for(int k = 0; k < ref[i].size(); k++){
                    dp[i][j] = (dp[i][j] + dp[ref[i][k]][j-1])%mod;
                }
            }
        }
        for(int j = 0; j < 10; j++)
        {
            sum = (sum + dp[j][n-1])%mod;
        }
        return sum;
    }
};
// @lc code=end

