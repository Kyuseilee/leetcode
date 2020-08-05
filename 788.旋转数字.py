#
# @lc app=leetcode.cn id=788 lang=python3
#
# [788] 旋转数字
#

# @lc code=start
class Solution:
    def rotatedDigits(self, N: int) -> int:
        ans = 0
        for x in range(1, N+1):
            S = str(x)
            ans += (all(d not in '347' for d in S) and any(d in '2569' for d in S))
        return ans
# @lc code=end

