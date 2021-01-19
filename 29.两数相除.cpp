/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 0)
            return -1;
        bool minus = false;
        if(abs(dividend) != dividend and abs(divisor) != divisor)
            minus = false;
        else if(abs(dividend) != dividend or abs(divisor) != divisor)
            minus = true;
        dividend = abs(dividend);
        divisor = abs(divisor);
        int base = 1;
        int count = 0;
        while(dividend - divisor >= 0)
        {
            dividend -= divisor;
            count += base;
            divisor += divisor;
            base += 1;
        }
    }
};
// @lc code=end

