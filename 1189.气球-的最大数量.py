#
# @lc app=leetcode.cn id=1189 lang=python3
#
# [1189] “气球” 的最大数量
#

# @lc code=start
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        dicts = {'a': 0, 'b': 0, 'l': 0, 'o':0, 'n':2}
        for i in text:
            if i in dicts:
                dicts[i] += 1
        dicts['l']//=2
        dicts['o']//= 2
        return min(dicts['a'], dicts['b'], dicts['l'], dicts['o'], dicts['n'])
        
# @lc code=end

