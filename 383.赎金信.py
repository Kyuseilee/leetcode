#
# @lc app=leetcode.cn id=383 lang=python
#
# [383] 赎金信
#

# @lc code=start
class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        if not ransomNote:
            return True
        cnt = {}
        for c in ransomNote:
            cnt[c] = cnt.get(c, 0) + 1
        num = len(ransomNote)
        for c in magazine:
            if c in cnt and cnt[c] >= 1:
                cnt[c] -= 1
                num -= 1
            if num == 0:
                return True
        return False
# @lc code=end

