#
# @lc app=leetcode.cn id=645 lang=python3
#
# [645] 错误的集合
#

# @lc code=start
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        a = sum(nums) - sum(set(nums))
        c = 0
        for i, num in enumerate(nums, 1):
            c ^= (i ^ num)
        b = c ^ a
        return [a, b]

# @lc code=end

