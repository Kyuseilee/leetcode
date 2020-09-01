#
# @lc app=leetcode.cn id=1413 lang=python3
#
# [1413] 逐步求和得到正数的最小值
#

# @lc code=start
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        num_length = len(nums)
        dp = [0] * num_length
        for i in range(num_length):
            if i == 0:
                dp[i] = nums[i]
            else:
                dp[i] = dp[i-1]+ nums[i]
        return 1 + abs(min(dp)) if min(dp) < 0 else 1

# @lc code=end

