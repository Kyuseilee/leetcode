#
# @lc app=leetcode.cn id=1523 lang=python3
#
# [1523] 在区间范围内统计奇数数目
#

# @lc code=start
class Solution:
    def countOdds(self, low: int, high: int) -> int:
        if low % 2 == 0 and high % 2 == 0:
            return (high - low) // 2
        elif low % 2 != 0 and high % 2 != 0:
            return  (high - 1 - low - 1) // 2+ 2
        else:
            return (high - 1- low) // 2 + 1
# @lc code=end

