#
# @lc app=leetcode.cn id=367 lang=python
#
# [367] 有效的完全平方数
#

# @lc code=start
class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num < 2:
            return True
        l, r = 2, num//2
        while l<=r:
            m = (l+r) // 2
            s = m * m
            if s == num:
                return True
            if s > num:
                r  = m-1
            if s < num:
                l = m + 1
        return False

# @lc code=end

