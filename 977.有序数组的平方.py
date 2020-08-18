#
# @lc app=leetcode.cn id=977 lang=python3
#
# [977] 有序数组的平方
#

# @lc code=start
class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        res = []
        for num in A:
            res.append(num * num)
        
        return sorted(res)
        
# @lc code=end

