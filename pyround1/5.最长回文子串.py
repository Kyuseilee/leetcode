#
# @lc app=leetcode.cn id=5 lang=python
#
# [5] 最长回文子串
#

# @lc code=start
class Solution(object):
    def expandAroundCenter(self, s, left, right):
        while left >= 0 and right < len(s) and s[left] == s[right]:
            left -= 1
            right += 1
        return left+1, right-1
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        start, end = 0, 0
        for i in range(len(s)):
            left1, right1 = self.expandAroundCenter(s, i, i )
            left2, right2 = self.expandAroundCenter(s, i, i+1)
            if right1 - left1 > end - start:
                end = right1
                start = left1
            if right2 - left2 > end - start:
                end = right2
                start = left2
        return s[start:end+1]

# @lc code=end

