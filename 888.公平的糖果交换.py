#
# @lc app=leetcode.cn id=888 lang=python3
#
# [888] 公平的糖果交换
#

# @lc code=start
class Solution:
    def fairCandySwap(self, A: List[int], B: List[int]) -> List[int]:
        Sa, Sb = sum(A), sum(B)
        setB = set(B)
        for x in A:
            if x + (Sb - Sa) // 2 in B:
                return (x, x + (Sb - Sa) // 2)
        
# @lc code=end

