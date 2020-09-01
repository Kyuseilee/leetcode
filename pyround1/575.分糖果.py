#
# @lc app=leetcode.cn id=575 lang=python
#
# [575] 分糖果
#

# @lc code=start
class Solution(object):
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        return len(set(candies)) if len(set(candies)) < len(candies) // 2 else len(candies) // 2
        
# @lc code=end

