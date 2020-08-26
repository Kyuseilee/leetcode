#
# @lc app=leetcode.cn id=1518 lang=python3
#
# [1518] 换酒问题
#

# @lc code=start
class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        total = numBottles
        while numBottles >= numExchange:
            time = numBottles // numExchange
            numBottles = numBottles % numExchange + time
            total += time
        return total

# @lc code=end

