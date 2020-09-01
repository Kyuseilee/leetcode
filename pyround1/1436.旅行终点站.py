#
# @lc app=leetcode.cn id=1436 lang=python3
#
# [1436] 旅行终点站
#

# @lc code=start
class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        P0 = [path[0] for path in paths]
        for path in paths:
            if path[1] not in P0:
                return path[1]
# @lc code=end

