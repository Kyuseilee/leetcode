#
# @lc app=leetcode.cn id=605 lang=python
#
# [605] 种花问题
#

# @lc code=start
class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        flowerbed = [0] + flowerbed
        flowerbed = flowerbed + [0]
        for i in range(1, len(flowerbed) - 1):
            if flowerbed[i - 1] == 0 and flowerbed[i] == 0 and flowerbed[i+1] == 0:
                n = n -1
                flowerbed[i] = 1
        return n <= 0
        
# @lc code=end

