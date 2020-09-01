#
# @lc app=leetcode.cn id=728 lang=python3
#
# [728] 自除数
#

# @lc code=start
class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res = []
        l = list(range(left, right+1))
        flag = 0
        for num in l:
            s = str(num)
            for i in range(len(s)):
                if s[i] == '0' or num % int(s[i]) != 0:
                    flag = 1
                    break
                elif num % int(s[i]) == 0:
                    continue
            if flag == 0:
                res.append(num)
            flag = 0
        return res


        
# @lc code=end

