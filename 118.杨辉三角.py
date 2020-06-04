#
# @lc app=leetcode.cn id=118 lang=python
#
# [118] 杨辉三角
#

# @lc code=start
class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        dp = [[0]*n for n in range(1, numRows+1)]
        for i in range(numRows):
            dp[i][0] = dp[i][-1] =1
        for i in range(0, numRows):
            for j in range(i+1):
                if (dp[i][j] == 0):
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j]
        return dp
# @lc code=end

