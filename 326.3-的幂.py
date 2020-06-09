#
# @lc app=leetcode.cn id=326 lang=python
#
# [326] 3的幂
#

# @lc code=start
class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n == 1:
            return True
        while(n > 3):
            if (n%3 == 0):
                n //= 3
            else:
                break
        return n == 3
        
# @lc code=end

