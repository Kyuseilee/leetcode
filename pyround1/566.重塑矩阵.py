#
# @lc app=leetcode.cn id=566 lang=python
#
# [566] 重塑矩阵
#

# @lc code=start
class Solution(object):
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        m, n = len(nums), len(nums[0])

        if m * n != r * c:
            return nums;
        res = [i for j in nums for i in j]
        return [res[i:i+c] for i in range(0, len(res), c)]

# @lc code=end

