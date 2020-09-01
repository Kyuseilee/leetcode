#
# @lc app=leetcode.cn id=290 lang=python
#
# [290] 单词规律
#

# @lc code=start
class Solution(object):
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        lookup1 = {}
        lookup2 = {}

        wordList = str.split(' ', -1) 

        if len(pattern) != len(wordList):
            return False
        
        for i in range(len(pattern)):
            if lookup1.get(pattern[i]):
                if lookup1[pattern[i]] != wordList[i]:
                    return False
            else:
                lookup1[pattern[i]] = wordList[i]

            if lookup2.get(wordList[i]):
                if lookup2[wordList[i]] != pattern[i]:
                    return False
            else:
                lookup2[wordList[i]] = pattern[i]

        return True
# @lc code=end

