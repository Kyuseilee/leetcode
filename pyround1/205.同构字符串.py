#
# @lc app=leetcode.cn id=205 lang=python
#
# [205] 同构字符串
#

# @lc code=start
class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        d = {}
        usedChar = set()
        for a, b in zip(s, t):
            if a not in d:
                if b not in usedChar:
                    usedChar.add(b)
                    d[a] = b
                else:
                    return False
            else:
                if d[a] != b:
                    return False
        return True
        
# @lc code=end

