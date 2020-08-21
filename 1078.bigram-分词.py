#
# @lc app=leetcode.cn id=1078 lang=python3
#
# [1078] Bigram 分词
#

# @lc code=start
class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        text = text.split(" ")
        res = []
        for i in range(len(text) - 2):
            if text[i] == first and text[i+1] == second:
                res.append(text[i+2])
        return res
        
# @lc code=end

