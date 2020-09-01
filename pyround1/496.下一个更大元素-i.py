#
# @lc app=leetcode.cn id=496 lang=python
#
# [496] 下一个更大元素 I
#

# @lc code=start
class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        ans = []
        for n1 in nums1:
            temp = -1
            for n2 in nums2[nums2.index(n1):]:
                if n2 > n1:
                    temp = n2
                    break
            ans.append(temp)
        return ans


                        
        
# @lc code=end

