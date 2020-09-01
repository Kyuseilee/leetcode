#
# @lc app=leetcode.cn id=1047 lang=python3
#
# [1047] 删除字符串中的所有相邻重复项
#

# @lc code=start
class Solution:
    def removeDuplicates(self, S: str) -> str:
        res = []
        for ch in S:
            if res and ch == res[-1]:
                res.pop()
            else:
                res.append(ch)
        return "".join(res)
        
# @lc code=end

