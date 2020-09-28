#
# @lc app=leetcode.cn id=28 lang=python
#
# [28] 实现 strStr()
#

# @lc code=start
class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if needle not in haystack:
            return -1
        if not needle and not haystack:
            return 0
        l = len(needle)
        for i in range(len(haystack)):
            if haystack[i:i+l] == needle:
                return i
# @lc code=end

