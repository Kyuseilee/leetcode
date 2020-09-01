#
# @lc app=leetcode.cn id=167 lang=python
#
# [167] 两数之和 II - 输入有序数组
#

# @lc code=start
class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        if not numbers:
            return []
        res = []
        n = len(numbers)
        l = 0
        r = n-1
        while(l < r):
            if (numbers[l] + numbers[r] == target):
                return [l+1, r+1]
            elif(numbers[l] + numbers[r] > target):
                r = r-1
            else:
                l = l+1
        return [-1, -1]
# @lc code=end

