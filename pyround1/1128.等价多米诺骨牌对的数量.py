#
# @lc app=leetcode.cn id=1128 lang=python3
#
# [1128] 等价多米诺骨牌对的数量
#

# @lc code=start
class Solution:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        ans = 0
        d = collections.defaultdict(int)
        for i, j in dominoes:
            num = 10 * i + j if i < j else 10 * j + i
            ans += d[num]
            d[num] += 1
        return ans
        
# @lc code=end

