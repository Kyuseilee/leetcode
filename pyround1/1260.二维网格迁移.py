#
# @lc app=leetcode.cn id=1260 lang=python3
#
# [1260] 二维网格迁移
#

# @lc code=start
class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        n = len(grid)
        m = len(grid[0])
        ans = [[0] * m for i in range(n)]
        for i in range(n):
            for j in range(m):
                div, mod = divmod((i*m + j+k)%(n*m), m)
                ans[div][mod] = grid[i][j]
        return ans

        
# @lc code=end

