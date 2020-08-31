#
# @lc app=leetcode.cn id=1304 lang=python3
#
# [1304] 和为零的N个唯一整数
#

# @lc code=start
class Solution:
    def sumZero(self, n: int) -> List[int]:
        ans = [x for x in range(n-1)]
        ans.append(-sum(ans))
        return ans
        
# @lc code=end

