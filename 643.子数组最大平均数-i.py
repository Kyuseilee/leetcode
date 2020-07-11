#
# @lc app=leetcode.cn id=643 lang=python3
#
# [643] 子数组最大平均数 I
#

# @lc code=start
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        ans = numsum = sum(nums[:k])
        for i in range(k, len(nums)):
            numsum += nums[i] - nums[i - k]
            ans = max(ans, numsum)
        return ans / k
        
# @lc code=end

