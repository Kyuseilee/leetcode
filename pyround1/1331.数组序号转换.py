#
# @lc app=leetcode.cn id=1331 lang=python3
#
# [1331] 数组序号转换
#

# @lc code=start
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        arr_ascending = list(set(arr))
        arr_ascending.sort()
        Hash = {}
        result = [0 for i in range(len(arr))]
        for j, k in enumerate(arr_ascending):
            Hash[k] = j + 1
        for l in range(len(arr)):
            result[l] = Hash[arr[l]]
        return result
        
# @lc code=end

