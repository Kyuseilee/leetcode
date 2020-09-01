#
# @lc app=leetcode.cn id=868 lang=python3
#
# [868] 二进制间距
#

# @lc code=start
class Solution:
    def binaryGap(self, N: int) -> int:
        s = str(bin(N))[2:]
        i = 0
        max_dis = 0
        count = 0
        for j in range(1, len(s)):
            if s[j] == '1':
                count += 1
                i = j
                max_dis = max(max_dis, count)
                count = 0
            else:
                count += 1
        return max_dis
        
# @lc code=end

