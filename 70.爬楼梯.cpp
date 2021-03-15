/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1, 0);
        dp[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= 2; j++)
            {
                if(i >= j)
                    dp[i] += dp[i-j];
            }
        }
        return dp[n];
        
    }
};
// @lc code=end

