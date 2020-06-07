#
# @lc app=leetcode.cn id=258 lang=python
#
# [258] 各位相加
#

# @lc code=start
class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        return (num-1)%9 + 1 if num!=0 else 0
# @lc code=end

