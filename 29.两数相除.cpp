/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0)
            return 0;
        if(divisor == 1)
            return dividend;
        else if(divisor == -1)
        {
            if(dividend > INT_MIN)
                return -dividend;
            return INT_MAX;
        }
        bool flag = false;
        int com = dividend * divisor;
        if(com < 0){
            flag = true;
        }
        dividend = abs(dividend);
        divisor = abs(divisor);
        int count = 0;
        while(dividend >= divisor)
        {
            dividend -= divisor;
            count += 1;
        }
        return flag ? count * -1: count;

    }
};
// @lc code=end

