#
# @lc app=leetcode.cn id=1010 lang=python3
#
# [1010] 总持续时间可被 60 整除的歌曲
#

# @lc code=start
class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        dic = {}
        for i, t in enumerate(time):
            r = t % 60 
            dic.setdefault(r, 0)
            dic[r] += 1
        count = 0
        for i in range(31):
            if i in [0, 30]:
                num = dic.get(i)
                if num and num > 1:
                    count += num*(num - 1) // 2
            else:
                num1 = dic.get(i)
                num2 = dic.get(60 - i)
                if num1 and num2:
                    count += num1 * num2
        return count 
        
# @lc code=end

