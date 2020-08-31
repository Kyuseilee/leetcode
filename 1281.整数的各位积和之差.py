#
# @lc app=leetcode.cn id=1281 lang=python3
#
# [1281] 整数的各位积和之差
#

# @lc code=start
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sn = str(n)
        res = []
        for ch in sn:
            res.append(ch)
        sum_val = 0
        mul_val = 1

        for i in range(len(res)):
            sum_val += int(res[i])
            mul_val *= int(res[i])
        
        return mul_val - sum_val


        
# @lc code=end

