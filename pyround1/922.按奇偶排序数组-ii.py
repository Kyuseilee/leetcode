#
# @lc app=leetcode.cn id=922 lang=python3
#
# [922] 按奇偶排序数组 II
#

# @lc code=start
class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        j = 1
        for i in range(0, len(A), 2):
            if A[i] %2 :
                while A[j] %2:
                    j += 2
                A[i], A[j] = A[j], A[i]
        return A
        
# @lc code=end

