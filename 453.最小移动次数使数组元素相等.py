#
# @lc app=leetcode.cn id=453 lang=python
#
# [453] 最小移动次数使数组元素相等
#

# @lc code=start
class Solution(object):
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        min_val = min(nums)
        count = 0
        for i in nums:
            count += i - min_val
        return count
        
# @lc code=end

