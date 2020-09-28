#
# @lc app=leetcode.cn id=1 lang=python
#
# [1] 两数之和
#

# @lc code=start
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dct = {}
        for i, n in enumerate(nums):
            if target - n in dct:
                return [dct[target - n], i]
            dct[n] = i

# @lc code=end

