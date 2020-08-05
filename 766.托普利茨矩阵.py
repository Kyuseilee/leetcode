#
# @lc app=leetcode.cn id=766 lang=python3
#
# [766] 托普利茨矩阵
#

# @lc code=start
class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        groups = {}
        for r, row in enumerate(matrix):
            for c, val in enumerate(row):
                if r - c not in groups:
                    groups[r-c] = val
                elif groups[r-c] != val:
                    return False
        return True
        
# @lc code=end

