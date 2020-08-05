#
# @lc app=leetcode.cn id=747 lang=python3
#
# [747] 至少是其他数字两倍的最大数
#

# @lc code=start
class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        if len(nums) >= 2:
            s = sorted(nums)
        else:
            return 0
        max1 = s[-1]
        max2 = s[-2]
        if max2*2 <= max1:
            for i in range(len(nums)):
                if nums[i] == max1:
                    return  i
        else:
            return -1
        
# @lc code=end

