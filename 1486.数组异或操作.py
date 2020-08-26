#
# @lc app=leetcode.cn id=1486 lang=python3
#
# [1486] 数组异或操作
#

# @lc code=start
class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        xor = 0
        for i in range(n):
            xor ^= (start + i * 2 )
        return xor

# @lc code=end

