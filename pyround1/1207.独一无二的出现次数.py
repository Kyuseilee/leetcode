#
# @lc app=leetcode.cn id=1207 lang=python3
#
# [1207] 独一无二的出现次数
#

# @lc code=start
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        dic = {}
        for i in arr:
            if i in dic.keys():
                dic[i] += 1
            else:
                dic[i] = 1
        return len(dic.values()) == len(set(dic.values()))
        
# @lc code=end

