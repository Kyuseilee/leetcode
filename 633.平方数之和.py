#
# @lc app=leetcode.cn id=633 lang=python
#
# [633] 平方数之和
#

# @lc code=start
class Solution(object):
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        j = int(math.sqrt(c))
        i = 0
        while i <= j:
            if c == i*i + j*j:
                return True
            elif i*i + j*j > c:
                j -= 1
            else:
                i += 1
        return False
        
# @lc code=end

