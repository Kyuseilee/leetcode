#
# @lc app=leetcode.cn id=482 lang=python
#
# [482] 密钥格式化
#

# @lc code=start
class Solution(object):
    def licenseKeyFormatting(self, S, K):
        """
        :type S: str
        :type K: int
        :rtype: str
        """
        s = S.upper().replace('-', '')[::-1]
        res = '' 
        for i in range(len(s)):
            if i % K == 0 and i != 0:
                res = '-' + res
            res = s[i] + res

        return res



                        
        
# @lc code=end

