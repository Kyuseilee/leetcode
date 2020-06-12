#
# @lc app=leetcode.cn id=441 lang=python
#
# [441] 排列硬币
#

# @lc code=start
class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        return int(((8 * n + 1) **0.5 - 1) / 2) 
# @lc code=end

