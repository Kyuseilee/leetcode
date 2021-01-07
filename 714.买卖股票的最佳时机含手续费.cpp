/*
 * @lc app=leetcode.cn id=714 lang=cpp
 *
 * [714] 买卖股票的最佳时机含手续费
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int total = 0;
        bool flag = false;
        int cur = 0;
        cur = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] - cur >= fee){
                if(i + 1 < prices.size() and prices[i] - cur - fee >= prices[i+1])
                {
                    total += prices[i] - cur -fee;
                    cur = prices[i+1];
                }
                else{
                    if(i+1 == prices.size())
                        total += prices[i] - cur - fee;
                }
                cur = prices[i+1];
            }
        }
        return total;
    }
};
// @lc code=end

