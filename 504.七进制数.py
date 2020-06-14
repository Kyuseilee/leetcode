#
# @lc app=leetcode.cn id=504 lang=python
#
# [504] 七进制数
#

# @lc code=start
class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num < 0:
            flag = 1
            num = -num
        else:
            flag = 0
        res = []
        while num>=7:
            fig = str(num % 7) 
            res.append(fig)
            num //= 7
        res.append(str(num))
        if flag:
            res.append('-')
        res.reverse()
        return ''.join(res)

        
# @lc code=end

