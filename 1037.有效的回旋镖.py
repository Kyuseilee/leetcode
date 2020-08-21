#
# @lc app=leetcode.cn id=1037 lang=python3
#
# [1037] 有效的回旋镖
#

# @lc code=start
class Solution:
    def isBoomerang(self, points: List[List[int]]) -> bool:
        if (points[1][0]==points[0][0]):
            k1=float('inf')
        else:
            k1=(points[1][1]-points[0][1])/(points[1][0]-points[0][0])
        if (points[2][0]==points[1][0]):
            k2=float('inf')
        else:
            k2=(points[2][1]-points[1][1])/(points[2][0]-points[1][0])
        if (points[2][0]==points[0][0]):
            k3=float('inf')
        else:
            k3=(points[2][1]-points[0][1])/(points[2][0]-points[0][0])
        if k1==k2 or k1==k3 or k2==k3:
            return False
        else:
            return True
        
# @lc code=end

