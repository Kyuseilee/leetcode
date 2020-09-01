#
# @lc app=leetcode.cn id=191 lang=python
#
# [191] 位1的个数
#

# @lc code=start
class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        n = str(bin(n))
        for a in n:
            if a == '1':
                count += 1
        return count 
# @lc code=end

