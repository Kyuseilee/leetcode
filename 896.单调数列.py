#
# @lc app=leetcode.cn id=896 lang=python3
#
# [896] 单调数列
#

# @lc code=start
class Solution:
    def isMonotonic(self, A: List[int]) -> bool:
        if len(A) == 1:
            return True
        result = [0]
        for i in range(len(A) - 1):
            temp = A[i] - A[i+1]
            result.append(temp)
        return (max(result) == 0 or min(result) == 0)
        
# @lc code=end

