#
# @lc app=leetcode.cn id=11 lang=python
#
# [11] 盛最多水的容器
#

# @lc code=start
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        max_square = 0
        square = 0
        i,j = 0, len(height) -1 
        while i < j:
            square = min(height[i], height[j])*(j-i)
            max_square = max(square, max_square)
            if height[i] > height[j]:
                j -= 1
            else:
                i += 1
        return max_square
# @lc code=end

