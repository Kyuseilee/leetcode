#
# @lc app=leetcode.cn id=1441 lang=python3
#
# [1441] 用栈操作构建数组
#

# @lc code=start
class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        res = []
        for i in range(1, target[-1]+1):
            res.append("Push") 
            if i not in target:
                res.append("Pop")
        return res
# @lc code=end

