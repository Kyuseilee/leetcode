#
# @lc app=leetcode.cn id=268 lang=python
#
# [268] 缺失数字
#

# @lc code=start
class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        if nums[-1] != len(nums):
            return len(nums)
        elif nums[0] != 0:
            return 0
        for i in range(1, len(nums)):
            if nums[i-1] + 1 != nums[i]:
                return nums[i-1] +1

# @lc code=end

