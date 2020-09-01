#
# @lc app=leetcode.cn id=686 lang=python3
#
# [686] 重复叠加字符串匹配
#

# @lc code=start
class Solution:
    def repeatedStringMatch(self, A: str, B: str) -> int:
        if B in A:
            return 1 
        a = A
        num = 1
        while True:
            num += 1
            A += a
            if B in A:
                return num
            if len(A) > len(B) + len(a):
                return -1
                
        
# @lc code=end

