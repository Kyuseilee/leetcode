#
# @lc app=leetcode.cn id=1051 lang=python3
#
# [1051] 高度检查器
#

# @lc code=start
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        res = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if res[i] != heights[i]:
                count += 1
        return count
# @lc code=end

