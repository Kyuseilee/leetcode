#
# @lc app=leetcode.cn id=506 lang=python
#
# [506] 相对名次
#

# @lc code=start
class Solution(object):
    def findRelativeRanks(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        s, dic, start = sorted(nums, reverse=True), {}, 1
        for i, val in enumerate(s):
            if start == 1:
                dic[val] = "Gold Medal"
            if start == 2:
                dic[val] = "Silver Medal"
            if start == 3:
                dic[val] = "Bronze Medal"
            if start > 3:
                dic[val] = str(start)
            start += 1
        res = []
        for i in range(len(nums)):
            res.append(dic.get(nums[i]))
        
        return res

        
# @lc code=end

