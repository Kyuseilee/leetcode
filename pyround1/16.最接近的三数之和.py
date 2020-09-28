#
# @lc app=leetcode.cn id=16 lang=python
#
# [16] 最接近的三数之和
#

# @lc code=start
class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        min_value = 10**7
        nums.sort()

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            left = i + 1
            right = len(nums) - 1
            while left < right:
                tmp_min = nums[i] + nums[left] + nums[right]
                if tmp_min == target: 
                    return tmp_min
                if abs(tmp_min - target) < abs(min_value - target):
                    min_value = tmp_min 
                if tmp_min - target > 0:
                    right0 = right - 1
                    while left < right and nums[right] == nums[right0]:
                        right -= 1
                    right = right0
                else:
                    left0 = left + 1
                    while left < right and nums[left] == nums[left0]:
                        left += 1
                    left = left0
        return min_value
            
            
# @lc code=end

