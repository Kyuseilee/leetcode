#
# @lc app=leetcode.cn id=1009 lang=python3
#
# [1009] 十进制整数的反码
#

# @lc code=start
class Solution:
    def bitwiseComplement(self, N: int) -> int:
        Nbin=bin(N)
        return 2**len(Nbin[2:])-1-N
# @lc code=end

