/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int cur = 0, former = 0;
        for(int i = 0; i < cost.size(); i++){
            former = cur;
            cur = cost[i] + min(cur, former);
        }
        return min(cur, former);
    }
};
// @lc code=end

