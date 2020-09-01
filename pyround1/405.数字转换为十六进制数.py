#
# @lc app=leetcode.cn id=405 lang=python
#
# [405] 数字转换为十六进制数
#

# @lc code=start
class Solution(object):
    def toHex(self, num):
        """
        :type num: int
        :rtype: str
        """
        stra = ''
        if num < 0:
            num = (abs(num) ^ ((2 ** 32) - 1)) + 1
        elif num == 0:
            return '0'
        while (num >> 4) > 0 or num > 0:
            a = str(num % 16)
            if a == '10': a = 'a'
            elif a == '11': a = 'b'
            elif a == '12': a = 'c'
            elif a == '13': a = 'd'
            elif a == '14': a = 'e'
            elif a == '15': a = 'f'
            stra += a
            num = num >> 4
        return ''.join(reversed(stra))
