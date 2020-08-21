#
# @lc app=leetcode.cn id=1046 lang=python3
#
# [1046] 最后一块石头的重量
#

# @lc code=start
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1:
            stones.sort()
            if stones[-1] != stones[-2]:
                tmp = stones[-1] - stones[-2]
                del stones[-2]
                del stones[-1]
                stones.append(tmp)
            else:
                del stones[-2]
                del stones[-1]
                
        return stones[0] if stones else 0
            
        
# @lc code=end

