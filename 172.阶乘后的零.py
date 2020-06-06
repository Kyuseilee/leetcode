#
# @lc app=leetcode.cn id=172 lang=python
#
# [172] 阶乘后的零
#

# @lc code=start
class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        return n//5 + self.trailingZeroes(n//5) if n != 0 else 0
# @lc code=end

