#
# @lc app=leetcode.cn id=1470 lang=python3
#
# [1470] 重新排列数组
#

# @lc code=start
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        rs = []
        for i in range(n):
            rs.append(nums[i])
            rs.append(nums[i+n])
        return rs
# @lc code=end

