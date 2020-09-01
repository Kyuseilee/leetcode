#
# @lc app=leetcode.cn id=989 lang=python3
#
# [989] 数组形式的整数加法
#

# @lc code=start
class Solution:
    def addToArrayForm(self, A: List[int], K: int) -> List[int]:
        s = ''
        for ch in A:
            s += str(ch)
        
        res = []
        nums = str(int(s) + K)
        for num in nums:
            res.append(num)
        return res

        
# @lc code=end

