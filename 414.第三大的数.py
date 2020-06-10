#
# @lc app=leetcode.cn id=414 lang=python
#
# [414] 第三大的数
#

# @lc code=start
class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        first = second = third = float('-inf')
        for num in nums:
            if num > third:
                if num < second:
                    third = num
                elif num > second:
                    if num < first:
                        third = second
                        second = num
                    elif num > first:
                        third = second
                        second = first
                        first = num
        if third == float('-inf'):
            return first
        else:
            return third
        
# @lc code=end

