#
# @lc app=leetcode.cn id=345 lang=python
#
# [345] 反转字符串中的元音字母
#

# @lc code=start
class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        dic = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
        i, j = 0, len(s) -1
        l = list(s)
        while i <j:
            if l[i] in dic and l[j] in dic:
                l[i], l[j] = l[j], l[i]
                i += 1
                j -= 1
            if l[i] not in dic:
                i += 1
            if l[j] not in dic:
                j -= 1
        return ''.join(l)


        
# @lc code=end

