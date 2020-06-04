#
# @lc app=leetcode.cn id=119 lang=python
#
# [119] 杨辉三角 II
#

# @lc code=start
class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        r = [1]
        for i in range(1, rowIndex+1):
            r.insert(0,0)
            for j in range(i):
                r[j] =r[j] + r[j+1]
        return r
# @lc code=end

