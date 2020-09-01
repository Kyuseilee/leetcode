#
# @lc app=leetcode.cn id=674 lang=python3
#
# [674] 最长连续递增序列
#

# @lc code=start
class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        count = 1
        res = 1
        if len(nums) == 0:
            return 0
        for i in range(len(nums) - 1):
            if nums[i] < nums[i+1]:
                count += 1
            else:
                res = max(res, count) 
                count = 1
        return max(res, count)

# @lc code=end

