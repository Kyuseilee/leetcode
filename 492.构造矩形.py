#
# @lc app=leetcode.cn id=492 lang=python
#
# [492] 构造矩形
#

# @lc code=start
class Solution(object):
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        W = int(math.sqrt(area))
        while area % W != 0:
            W -= 1
        return [area/W, W]
        
# @lc code=end

