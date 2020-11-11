/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_profit = 0;
        int min_val = 1e9;
        int max_val = 0;
        for(int price : prices){
            // cout << price - min_val << " and " << max_val << "\n";
            if(price - min_val < max_val){
                total_profit += max_val;
                max_val = 0;
                min_val = 1e9;
            }
            max_val = max(max_val, price-min_val);
            min_val = min(price, min_val);
            // cout << total_profit << "\n";

            // cout << max_val << "\n";
            // cout <<"Min_val:" << price << " : " << min_val <<endl;
            
        }
        total_profit += max_val;
        return total_profit;
        
    }
};
// @lc code=end

