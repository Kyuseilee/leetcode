#
# @lc app=leetcode.cn id=7 lang=python
#
# [7] 整数反转
#

# @lc code=start
class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        import math

        if x > math.pow(2, 31)-1 or x < -math.pow(2, 31):
            return 0
        
        def helper(tmp_x):
            tmp = 0
            while tmp_x:
                tmp =tmp*10 + tmp_x%10
                tmp_x /= 10
            return tmp
        if x < 0:
            result = -helper(abs(x))
        else:
            result = helper(x)
        return 0 if result < -math.pow(2, 31) or result>math.pow(2, 31) -1 else result


# @lc code=end

