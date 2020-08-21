#
# @lc app=leetcode.cn id=1021 lang=python3
#
# [1021] 删除最外层的括号
#

# @lc code=start
class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        primitive_indices = []
        j, count = 0, 0
        for i in range(len(S)):
            if S[i] == "(": count += 1
            elif S[i] == ")" : count -= 1
            if count == 0:
                primitive_indices.append((j, i))
                j = i+1
        return "".join(S[m+1:n] for m, n in primitive_indices)
        
# @lc code=end

