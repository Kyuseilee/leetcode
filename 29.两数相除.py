#
# @lc app=leetcode.cn id=29 lang=python
#
# [29] 两数相除
#

# @lc code=start
class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        def recursion(dividend, divisor):
            if dividend < divisor:
                return 0
            if dividend == divisor:
                return 1
            nn = 1
            dd = divisor
            while True:
                if dividend > dd:
                    n = nn
                    nn += nn
                    d = dd
                    dd += dd
                elif dividend == dd:
                    return nn
                else:
                    return n + recursion(dividend-d, divisor)
        
        sign = (dividend > 0) ^ (divisor > 0)
        ans = recursion(abs(dividend), abs(divisor))
        if sign:
            ans = -ans

        return min(max(-2**31, ans), 2**31-1)
        
# @lc code=end

