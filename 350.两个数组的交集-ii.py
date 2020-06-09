#
# @lc app=leetcode.cn id=350 lang=python
#
# [350] 两个数组的交集 II
#

# @lc code=start
class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        dic = defaultdict(int)
        r = []
        for i in nums1: 
            dic[i] += 1
        for i in nums2:
            if dic[i] != 0:
                r.append(i)
                dic[i] -= 1
        return r
        
# @lc code=end

