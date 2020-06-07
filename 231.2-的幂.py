#
# @lc app=leetcode.cn id=231 lang=python
#
# [231] 2的幂
#

# @lc code=start
class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while n >1:     
            if n %2 == 0:
                n /= 2
            else:
                return False
        return n == 1
# @lc code=end

