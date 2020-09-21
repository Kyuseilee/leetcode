#
# @lc app=leetcode.cn id=34 lang=python
#
# [34] 在排序数组中查找元素的第一个和最后一个位置
#

# @lc code=start
class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        left, right = 0, len(nums) -1 
        if not nums or target > nums[right] or target < nums[left]:
            return [-1, -1]
        while left < right:
            while nums[left] < target:
                left += 1
            while nums[right] > target:
                right -= 1
            if nums[left] == nums[right]:
                break
        return [left, right] if left <= right else [-1, -1]
        
        
# @lc code=end

