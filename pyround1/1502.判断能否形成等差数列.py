#
# @lc app=leetcode.cn id=1502 lang=python3
#
# [1502] 判断能否形成等差数列
#

# @lc code=start
class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        ls = sorted(arr)
        diff = ls[1] - ls[0]
        for i in range(1, len(arr)-1):
            if ls[i+1] - ls[i] != diff:
                return False
        return True
# @lc code=end

