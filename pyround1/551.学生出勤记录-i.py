#
# @lc app=leetcode.cn id=551 lang=python
#
# [551] 学生出勤记录 I
#

# @lc code=start
class Solution(object):
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if s.count("A") > 1 or "LLL" in s:
            return False
        return True
        
# @lc code=end

