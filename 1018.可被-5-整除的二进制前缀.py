#
# @lc app=leetcode.cn id=1018 lang=python3
#
# [1018] 可被 5 整除的二进制前缀
#

# @lc code=start
class Solution:
    def prefixesDivBy5(self, A: List[int]) -> List[bool]:
        res = []
        for i in range(len(A)):
            if i:
                A[i] = ((A[i-1] << 1) + A[i]) % 5
            if A[i] == 0:
                res.append(True)

            else:
                res.append(False)
        return res
        
# @lc code=end

