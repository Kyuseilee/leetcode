#
# @lc app=leetcode.cn id=680 lang=python3
#
# [680] 验证回文字符串 Ⅱ
#

# @lc code=start
class Solution:
    def validPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1

        while left <= right:
            if s[left] == s[right]:
                left += 1
                right -= 1
            else:
                x = s[left:right]
                y = s[left+1:right+1]
                return True if x[::-1] == x or y[::-1] == y else False
        return True

        
# @lc code=end

