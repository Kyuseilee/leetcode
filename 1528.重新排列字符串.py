#
# @lc app=leetcode.cn id=1528 lang=python3
#
# [1528] 重新排列字符串
#

# @lc code=start
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        length = len(s)
        result = [""] * length
        for i, ch in enumerate(s):
            result[indices[i]] = ch
        return "".join(result)
# @lc code=end

