/*
 * @lc app=leetcode.cn id=309 lang=cpp
 *
 * [309] 最佳买卖股票时机含冷冻期
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(), vector<int>(3, 0));
        dp[0][0] = -prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] -prices[i]);
            dp[i][1] = max(dp[i-1][1], dp[i-1][2]);
            dp[i][2] = dp[i-1][0] + prices[i];
        }
        return max(max(dp[prices.size()-1][0], dp[prices.size()-1][1]), dp[prices.size()-1][2]);

    }
};
// @lc code=end

