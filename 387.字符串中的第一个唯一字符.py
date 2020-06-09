#
# @lc app=leetcode.cn id=387 lang=python
#
# [387] 字符串中的第一个唯一字符
#

# @lc code=start
class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        min_index = len(s)

        for c in "abcdefghijklmnopqrstuvwxyz":
            i  = s.find(c)
            if i != -1 and i == s.rfind(c):
                min_index = min(min_index, i)
        return min_index if min_index != len(s) else -1
            
# @lc code=end

