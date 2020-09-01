#
# @lc app=leetcode.cn id=1287 lang=python3
#
# [1287] 有序数组中出现次数超过25%的元素
#

# @lc code=start
class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        l = len(arr) / 4
        count = 0
        for i in range(len(arr)):
            c = arr.count(arr[i])
            if c > l:
                return arr[i]
        
        
# @lc code=end

