#
# @lc app=leetcode.cn id=349 lang=python
#
# [349] 两个数组的交集
#

# @lc code=start
class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        l = []
        nums1 = set(nums1)
        nums2 = set(nums2)
        for s in nums1:
            if s in nums2:
                l.append(s)
        return set(l)
        
# @lc code=end

