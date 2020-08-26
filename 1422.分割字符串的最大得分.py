#
# @lc app=leetcode.cn id=1422 lang=python3
#
# [1422] 分割字符串的最大得分
#

# @lc code=start
class Solution:
    def maxScore(self, s: str) -> int:
        sum = s.count('1')
        ans = 0
        for i in s[:-1]:
            sum = sum-1 if i == '1' else sum +1
            ans = max(ans, sum)
        return ans
# @lc code=end

