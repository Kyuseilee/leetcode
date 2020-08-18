#
# @lc app=leetcode.cn id=970 lang=python3
#
# [970] 强整数
#

# @lc code=start
class Solution:
    def powerfulIntegers(self, x: int, y: int, bound: int) -> List[int]:
        a = int(math.log(bound, x)) + 1 if x > 1 else 1
        b = int(math.log(bound, y)) + 1 if y > 1 else 1
        ans = set()
        for i in range(a):
            for j in range(b):
                k = x ** i + y ** j
                if k > bound:
                    break
                ans |= {k}
        return ans
        
# @lc code=end

