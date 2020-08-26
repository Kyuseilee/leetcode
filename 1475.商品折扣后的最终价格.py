#
# @lc app=leetcode.cn id=1475 lang=python3
#
# [1475] 商品折扣后的最终价格
#

# @lc code=start
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        stack, result = [], [i for i in prices]
        for i in range(len(prices)):
            while stack and prices[stack[-1]] >= prices[i]:
                result[stack[-1]] -= prices[i]
                stack.pop()
            stack.append(i)
        return result
# @lc code=end

