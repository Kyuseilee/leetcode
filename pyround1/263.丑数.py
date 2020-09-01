#
# @lc app=leetcode.cn id=263 lang=python
#
# [263] 丑数
#

# @lc code=start
class Solution(object):
    def isUgly(self, num):
        """
        :type num: int
        :rtype: bool
        """
        while num > 1 and(num%2==0 or num%3==0 or num%5==0):
            if num%2==0:
                num /= 2
            if num%3 == 0:
                num /= 3
            if num%5 == 0:
                num /= 5
        return num==1
# @lc code=end

