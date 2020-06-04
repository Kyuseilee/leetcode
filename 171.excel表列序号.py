#
# @lc app=leetcode.cn id=171 lang=python
#
# [171] Excel表列序号
#

# @lc code=start
class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = 0
        bit = 1
        for a in s[::-1]:
            res += (ord(a) - 64) * bit
            bit *= 26
        return res
# @lc code=end

