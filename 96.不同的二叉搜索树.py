#
# @lc app=leetcode.cn id=96 lang=python
#
# [96] 不同的二叉搜索树
#

# @lc code=start
class Solution(object):
    def numTrees(self, n):
        """
        :type n: int
        :rtype: int
        """
        store= [1, 1]
        if n <= 1:
            return store[n]
        for m in range(2, n+1):
            s = m-1
            count = 0
            for i in range(m):
                count += store[i]*store[s-i]
            store.append(count)
        return store[n]
# @lc code=end

