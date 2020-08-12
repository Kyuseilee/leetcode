#
# @lc app=leetcode.cn id=852 lang=python3
#
# [852] 山脉数组的峰顶索引
#

# @lc code=start
class Solution:
    def peakIndexInMountainArray(self, A: List[int]) -> int:
        return (A.index(max(A)))
        
# @lc code=end

