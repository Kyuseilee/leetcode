#
# @lc app=leetcode.cn id=849 lang=python3
#
# [849] 到最近的人的最大距离
#

# @lc code=start
class Solution:
    def maxDistToClosest(self, seats: List[int]) -> int:
        ans = 0
        for seat, group in itertools.groupby(seats):
            if not seat:
                K = len(list(group))
                ans = max(ans, (K+1)//2)
        return max(ans, seats.index(1), seats[::-1].index(1))
            

# @lc code=end

