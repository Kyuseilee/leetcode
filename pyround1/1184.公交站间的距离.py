#
# @lc app=leetcode.cn id=1184 lang=python3
#
# [1184] 公交站间的距离
#

# @lc code=start
class Solution:
    def distanceBetweenBusStops(self, distance: List[int], start: int, destination: int) -> int:
        sum_distance = sum(distance)
        if start <= destination:
            first_distance = sum(distance[start:destination])
        else:
            first_distance = sum(distance[destination:start])
        return min(first_distance, sum_distance - first_distance)
        
# @lc code=end

