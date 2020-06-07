#
# @lc app=leetcode.cn id=242 lang=python
#
# [242] 有效的字母异位词


# @lc code=start
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != lent):
            return False
        for x in set(s):
            if s.count(x) !=t.count(x):
                return False
        return True
# @lc code=end

