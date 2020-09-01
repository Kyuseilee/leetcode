#
# @lc app=leetcode.cn id=762 lang=python3
#
# [762] 二进制表示中质数个计算置位
#

# @lc code=start
class Solution:
    def countPrimeSetBits(self, L: int, R: int) -> int:
        l = []
        for i in range(L, R+1):
            l.append(i)
        count = 0
        for i in l:
            s = str("{0:b}".format(i))
            c = s.count('1')
            flag = 0
            if c == 1:
                continue
            elif c == 2:
                count += 1
            else:
                for i in range(2, c):
                    if c%i == 0:
                        flag = 1
                        break
                if flag == 0:
                    count += 1
        return count

        
# @lc code=end

