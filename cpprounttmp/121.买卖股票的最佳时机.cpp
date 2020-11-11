/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_val = 0;
        int minprice = 1e9;
        for(int price : prices){
            max_val = max(max_val, price - minprice);
            minprice = min(price, minprice);
        }
        return max_val;
    }
};
// @lc code=end

