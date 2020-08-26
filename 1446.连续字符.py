#
# @lc app=leetcode.cn id=1446 lang=python3
#
# [1446] 连续字符
#

# @lc code=start
class Solution:
    def maxPower(self, s: str) -> int:
        res = 1
        left, right = 0, 1
        while right < len(s):
            if s[right] != s[left]:
                res = max(right-left, res)
                left = right
            right += 1
        return max(right - left, res)

                
# @lc code=end

