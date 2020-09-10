#
# @lc app=leetcode.cn id=8 lang=python
#
# [8] 字符串转换整数 (atoi)
#

# @lc code=start
class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        s = ''
        flag = 1
        consist = 1
        only_number = 1
        nospace = 1
        for i in range(len(str)):
            if str[i] != ' ':
                nospace = 0
            elif nospace:
                continue
            if str[i] == '-' or str[i] == '+':
                if only_number:
                    if consist == 0:
                        break
                    consist = 0
                    if str[i] == '-':
                        flag = 0
                    continue
                else:
                    break
            if not ((str[i]>='0' and str[i] <='9') or str[i] == '-'):
                break
            if str[i] >= '0' and str[i] <= '9':
                s += str[i]
                only_number = 0
        if s == '':
            return 0
        if not flag:
            result = -int(s)
        else:
            result = int(s)
        if result > 2**31 -1:
            return 2**31 -1
        if result < -2**31:
            return -2**31
        return result
# @lc code=end

