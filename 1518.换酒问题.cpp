/*
 * @lc app=leetcode.cn id=1518 lang=cpp
 *
 * [1518] 换酒问题
 */

// @lc code=start
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        int bottle = numBottles;
        while(bottle >= numExchange){
            bottle -= numExchange;
            count++;
            bottle++;
        }
        return count;

    }
};
// @lc code=end

