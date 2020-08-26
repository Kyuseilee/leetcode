#
# @lc app=leetcode.cn id=1403 lang=python3
#
# [1403] 非递增顺序的最小子序列
#

# @lc code=start
class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        s_nums = sorted(nums, reverse=True)
        j = 1
        while sum(s_nums[:j]) <= sum(s_nums[j:]):
            j += 1
        return s_nums[:j] 

# @lc code=end

