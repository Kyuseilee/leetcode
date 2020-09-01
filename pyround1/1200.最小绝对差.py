#
# @lc app=leetcode.cn id=1200 lang=python3
#
# [1200] 最小绝对差
#

# @lc code=start
class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        ls = sorted(arr)
        div = []
        res = []
        for i in range(len(ls) - 1):
            div.append(ls[i+1] - ls[i])
        min_index = sorted(div)[0]
        for i in range(len(div)):
            if div[i] == min_index:
                res.append([ls[i], ls[i+1]])
        return res 

        
# @lc code=end

