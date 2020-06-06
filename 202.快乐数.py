#
# @lc app=leetcode.cn id=202 lang=python
#
# [202] 快乐数
#

# @lc code=start
class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        visited = set()
        while n != 1 and n not in visited:
            visited.add(n)
            nxt = 0
            while n != 0:
                nxt += (n % 10) ** 2
                n //= 10
            n = nxt
        return n == 1

# @lc code=end

