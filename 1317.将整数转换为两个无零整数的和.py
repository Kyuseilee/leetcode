#
# @lc app=leetcode.cn id=1317 lang=python3
#
# [1317] 将整数转换为两个无零整数的和
#

# @lc code=start
class Solution:
    def getNoZeroIntegers(self, n: int) -> List[int]:
        for i in range(1, n):
            b = str(n-i)
            si = str(i)
            if '0' in b or '0' in si:
                continue
            return [i, int(b)]

        
# @lc code=end

