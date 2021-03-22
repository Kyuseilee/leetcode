/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n <2)
            return n;
        int prepre = 1, pre = 1, cur = 0;
        for(int i = 2; i <= n; i++)
        {
            cur = pre + prepre;
            prepre = pre;
            pre = cur;
        }
        return cur;
    }
};
// @lc code=end

