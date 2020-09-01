#
# @lc app=leetcode.cn id=905 lang=python3
#
# [905] 按奇偶排序数组
#

# @lc code=start
class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        d = deque()
        for i in A:
            if i % 2 == 0:
                d.appendleft(i)
            else:
                d.append(i)
        return list(d)
        
# @lc code=end

