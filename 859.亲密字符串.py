#
# @lc app=leetcode.cn id=859 lang=python3
#
# [859] 亲密字符串
#

# @lc code=start
class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        index =[]
        if len(A) == len(B):
            for i in range(len(A)):
                if A[i] != B[i]:
                    index.append(i)
            if len(index) == 2 and A[index[0]] == B[index[1]] and A[index[1]] == B[index[0]]:
                return True
            if len(index) == 0 and len(A)-len(set(A)) > 0:
                return True
        return False
# @lc code=end

