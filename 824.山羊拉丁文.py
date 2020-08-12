#
# @lc app=leetcode.cn id=824 lang=python3
#
# [824] 山羊拉丁文
#

# @lc code=start
class Solution:
    def toGoatLatin(self, S: str) -> str:
        l = S.split(' ')
        for i in range(len(l)):
            if l[i][0] in 'aeiouAEIOU':
                l[i] += 'ma' + 'a' * (i+1)
            else:
                l[i] = l[i][1:] + l[i][0] +'ma'+ (i+1) * 'a'
        s = ' '.join(l)
        return s

        
# @lc code=end

