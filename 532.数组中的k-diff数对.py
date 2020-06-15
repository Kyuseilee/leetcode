#
# @lc app=leetcode.cn id=532 lang=python
#
# [532] 数组中的K-diff数对
#

# @lc code=start
class Solution(object):
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k< 0:
            return 0
        if k == 0:
            return len(set([i for i in nums if nums.count(i)>=2]))
        cl = [i + k for i in nums]
        return len(set(cl) & set(nums))
# @lc code=end

