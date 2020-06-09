#
# @lc app=leetcode.cn id=392 lang=python
#
# [392] 判断子序列
#

# @lc code=start
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        p = q = 0
        cnt = 0
        while p < len(s) and q < len(t):
            if s[p] == t[q]:
                cnt += 1
                p += 1
            q += 1
        return cnt == len(s)
# @lc code=end

