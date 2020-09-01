#
# @lc app=leetcode.cn id=475 lang=python
#
# [475] 供暖器
#

# @lc code=start
class Solution(object):
    def findRadius(self, houses, heaters):
        """
        :type houses: List[int]
        :type heaters: List[int]
        :rtype: int
        """
        result = []
        if len(heaters) == 1:
            for item in houses:
                result.append(abs(item-heaters[0]))
            return max(result)
        
        houses.sort()
        heaters.sort()
        p1, p2 = 0, 1
        for house in houses:
            while p2 < len(heaters) -1 and heaters[p2] < house:
                p2 += 1
                p1 += 1
            result.append(min(abs(house-heaters[p1]), abs(heaters[p2] - house)))
        return max(result)
        
        
# @lc code=end

