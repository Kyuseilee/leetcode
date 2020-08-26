#
# @lc app=leetcode.cn id=1232 lang=python3
#
# [1232] 缀点成线
#

# @lc code=start
class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        if len(coordinates) == 2:
            return True
        x1, y1 = coordinates[0][0], coordinates[0][1]
        x2, y2 = coordinates[1][0], coordinates[1][1]
        for i in range(2, len(coordinates)):
            x3, y3 = coordinates[i][0], coordinates[i][1]
            if (y3 - y2)*(x2 - x1) != (y2 - y1)*(x3 - x2):
                return False
        return True
# @lc code=end

