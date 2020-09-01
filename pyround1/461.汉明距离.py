#
# @lc app=leetcode.cn id=461 lang=python
#
# [461] 汉明距离
#

# @lc code=start
class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        num = 0
        res = []
        while x != 0 or y != 0:
            res.append((x%2, y%2))
            x //= 2
            y //= 2
        for xii, yii in res:
            if xii != yii:
                num += 1
        
        return num
        
# @lc code=end

