#
# @lc app=leetcode.cn id=748 lang=python3
#
# [748] 最短完整词
#

# @lc code=start
class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        tmp = []
        licensePlate = licensePlate.lower()
        for ch in licensePlate:
            if ch >= 'a' and ch <= 'z':
                tmp.append(ch)
        
        words = sorted(words, key = lambda x: len(x))

        for word in words:
            l = tmp.copy()
            for i in word:
                if i in l:
                    l.remove(i)
                if not l:
                    return word
                
        
# @lc code=end

