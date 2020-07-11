#
# @lc app=leetcode.cn id=581 lang=python
#
# [581] 最短无序连续子数组
#

# @lc code=start
class Solution(object):
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num = sorted(nums)
        sum = 0
        for i in range(len(nums)): 
            if num[i] != nums[i]:
                sum += 1
        return sum
        
# @lc code=end

