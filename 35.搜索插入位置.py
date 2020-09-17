#
# @lc app=leetcode.cn id=35 lang=python
#
# [35] 搜索插入位置
#

# @lc code=start
class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if target in nums:
            return nums.index(target)
        if target > nums[-1]:
            return len(nums)
        if target < nums[0]:
            return 0
        for i in range(len(nums) - 1):
            if nums[i] < target and nums[i+1] > target:
                return i+1
# @lc code=end

