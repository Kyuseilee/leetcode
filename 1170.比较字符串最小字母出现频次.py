#
# @lc app=leetcode.cn id=1170 lang=python3
#
# [1170] 比较字符串最小字母出现频次
#

# @lc code=start
class Solution:
    def numSmallerByFrequency(self, queries: List[str], words: List[str]) -> List[int]:
        def func(s):
            Hash = {}
            for i in s:
                Hash[i] = Hash.get(i, 0) + 1
            return Hash[min(s)]
        for k in range(len(queries)):
            queries[k] = func(queries[k])
        for i in range(len(words)):
            words[i] = func(words[i])
        Hash_len = {1:0, 2:0, 3:0, 4:0, 5:0, 6:0, 7:0, 8:0, 9:0, 10:0}
        for key in Hash_len.keys():
            for m in words:
                if m > key:
                    Hash_len[key] += 1
        result = []
        for n in range(len(queries)):
            result.append(Hash_len[queries[n]])
        return result
        
        
# @lc code=end

