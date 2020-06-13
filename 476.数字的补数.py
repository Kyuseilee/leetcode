#
# @lc app=leetcode.cn id=476 lang=python
#
# [476] 数字的补数
#

# @lc code=start
class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        return 2**(len(bin(num))-2)-num-1
# @lc code=end

