#
# @lc app=leetcode.cn id=1005 lang=python3
#
# [1005] K 次取反后最大化的数组和
#

# @lc code=start
class Solution:
    def largestSumAfterKNegations(self, A: List[int], K: int) -> int:
        A.sort()
        i = 0
        while i < K:
            if A[i] < 0:
                A[i] = -A[i]
                i += 1
            else:
                if (K - i) %2 == 0:
                    break
                else:
                    if i != 0 and A[i] > A[i - 1]:
                        A[i-1] = -A[i-1]
                    else:
                        A[i] = -A[i]
                    break
        return sum(A)
        
# @lc code=end

