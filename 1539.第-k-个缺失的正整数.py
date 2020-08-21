#
# @lc app=leetcode.cn id=1539 lang=python3
#
# [1539] 第 k 个缺失的正整数
#

# @lc code=start
class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        count = 0
        nums = list(range(1, (arr[-1] + 1)))
        for num in nums:
            if num not in arr:
                count += 1
                if count == k:
                    ans = num
                    break 
        if count < k:
            ans = nums[-1]
            while count < k:
                ans += 1
                count += 1
        return ans
        
                

# @lc code=end

