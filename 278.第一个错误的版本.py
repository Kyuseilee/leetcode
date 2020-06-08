#
# @lc app=leetcode.cn id=278 lang=python
#
# [278] 第一个错误的版本
#

# @lc code=start
# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        l, r = 1, n
        while  l <= r:
            m = (l+r) // 2
            if isBadVersion(m) > m * isBadVersion(m - 1):
                return m
            elif isBadVersion(m):
                r = m - 1
            else:
                l = m + 1

        
# @lc code=end

