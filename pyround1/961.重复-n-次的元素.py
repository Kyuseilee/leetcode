#
# @lc app=leetcode.cn id=961 lang=python3
#
# [961] 重复 N 次的元素
#

# @lc code=start
class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        count = collections.Counter(A)
        for k in count:
            if count[k] > 1:
                return k
# @lc code=end

