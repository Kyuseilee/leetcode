/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        int profit = 0;
        int max_profit = 0;
        for(int i = 0; i < prices.size()-1; i++){
            profit += prices[i+1] - prices[i];
            max_profit = max(profit, max_profit);
            if(profit < 0){
                profit = 0;
            }
        }
        max_profit = max(profit, max_profit);
        return max_profit;

    }
};
// @lc code=end

