#
# @lc app=leetcode.cn id=33 lang=python
#
# [33] 搜索旋转排序数组
#

# @lc code=start
class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left, right = 0, len(nums)-1
        if not nums: return -1
        while left < right-1:
            mid = (left + right) //2 
            if nums[left] < nums[mid]:
                if target <= nums[mid] and target >= nums[left]:
                    right = mid
                else:
                    left = mid
            else:
                if target >= nums[mid] and target <= nums[right]:
                    left = mid
                else:
                    right = mid
        if nums[left] == target:
            return left
        if nums[right] == target:
            return right
        return -1
                    
# @lc code=end

