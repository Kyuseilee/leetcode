#
# @lc app=leetcode.cn id=507 lang=python
#
# [507] 完美数
#

# @lc code=start
class Solution(object):
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 1:
            return False
        tmp = 1
        for i in range(2, int(num**0.5)+1):
            if num % i == 0:
                tmp += i
                tmp += num // i
        
        return tmp == num
        
# @lc code=end

