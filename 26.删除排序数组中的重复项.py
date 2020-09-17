#
# @lc app=leetcode.cn id=26 lang=python
#
# [26] 删除排序数组中的重复项
#

# @lc code=start
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for index in range(len(nums)-1, 0, -1):
            if nums[index] == nums[index-1]:
                nums.pop(index)
        return len(nums)
        
# @lc code=end

