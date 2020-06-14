#
# @lc app=leetcode.cn id=520 lang=python
#
# [520] 检测大写字母
#

# @lc code=start
class Solution(object):
    def detectCapitalUse(self, word):
        """
        :type word: str
        :rtype: bool
        """
        return word.isupper() or word.islower() or word.istitle()

        
# @lc code=end

