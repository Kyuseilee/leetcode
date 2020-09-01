#
# @lc app=leetcode.cn id=1380 lang=python3
#
# [1380] 矩阵中的幸运数
#

# @lc code=start
class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        mins = {min(rows) for rows in matrix}
        maxes = {max(columns) for columns in zip(*matrix)}
        return list(mins & maxes)
# @lc code=end

