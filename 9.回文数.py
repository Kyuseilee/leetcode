#
# @lc app=leetcode.cn id=9 lang=python
#
# [9] 回文数
#

# @lc code=start
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 : return False

        str_x = str(x)
        if str_x == str_x[::-1]:
            return True
        return False
# @lc code=end

