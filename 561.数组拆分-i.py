#
# @lc app=leetcode.cn id=561 lang=python
#
# [561] 数组拆分 I
#

# @lc code=start
class Solution(object):
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length = len(nums)
        nums.sort()
        sum = 0
        for i in range(len(nums)):
            if i % 2 == 1:
                continue
            sum += nums[i]
        return sum

        
# @lc code=end

