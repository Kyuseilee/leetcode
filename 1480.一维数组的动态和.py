#
# @lc app=leetcode.cn id=1480 lang=python3
#
# [1480] 一维数组的动态和
#

# @lc code=start
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        res = [nums[0]]
        val = nums[0]
        for i in range(1, len(nums)):
            val += nums[i]
            res.append(val)
        return res
# @lc code=end

