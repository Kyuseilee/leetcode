#
# @lc app=leetcode.cn id=949 lang=python3
#
# [949] 给定数字能组成的最大时间
#

# @lc code=start
class Solution:
    def largestTimeFromDigits(self, A: List[int]) -> str:
        A.sort(reverse = True)
        for a, b, c, d in permutations(A):
            if a * 10 + b < 24 and c* 10 + d < 60:
                return f"{a}{b}:{c}{d}"
        return ''
        



        
# @lc code=end

