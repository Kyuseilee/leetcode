#
# @lc app=leetcode.cn id=1033 lang=python3
#
# [1033] 移动石子直到连续
#

# @lc code=start
class Solution:
    def numMovesStones(self, a: int, b: int, c: int) -> List[int]:
        tmp = [a, b, c]
        tmp.sort()
        x, y, z = tmp[0], tmp[1], tmp[2]
        if x + 1 == y and y + 1 == z:
            return [0, 0]
        
        else:
            if y - x == 2 or z - y == 2 or (x + 1 == y  or y + 1 == z):
                minimum_moves = 1
            else:
                minimum_moves = 2
            maximum_moves = (y-x) + (z-y) - 2
        return [minimum_moves, maximum_moves]
        
# @lc code=end

