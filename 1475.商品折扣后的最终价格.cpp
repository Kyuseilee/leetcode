/*
 * @lc app=leetcode.cn id=1475 lang=cpp
 *
 * [1475] 商品折扣后的最终价格
 */

// @lc code=start
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i = 0; i < prices.size(); i++){
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j]<= prices[i])
                {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};
// @lc code=end

