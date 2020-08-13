#
# @lc app=leetcode.cn id=929 lang=python3
#
# [929] 独特的电子邮件地址
#

# @lc code=start
class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        for i in range(len(emails)):
            for ch in emails[i]:
                at = emails[i].index("@")
                if ch == '.' and emails[i].index(ch) < at:
                    j = emails[i].index(ch)
                    emails[i] = emails[i][:j]+emails[i][j+1:]
                elif ch == '+':
                    k = emails[i].index(ch)
                    emails[i] = emails[i][:k]+emails[i][at:]
                    break
        return len(set(emails))


        
# @lc code=end

