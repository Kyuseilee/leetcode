#
# @lc app=leetcode.cn id=409 lang=python
#
# [409] 最长回文串
#

# @lc code=start
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        a = set(s)
        b= list(a)
        oddc = 0
        flag = 0
        for i in range(len(b)):
            c = s.count(b[i])
            if c % 2 != 0:
                oddc += 1
                flag = 1
        l = len(s) - (oddc - flag)
        return l
        
# @lc code=end

