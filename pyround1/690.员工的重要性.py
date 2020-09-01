#
# @lc app=leetcode.cn id=690 lang=python3
#
# [690] 员工的重要性
#

# @lc code=start
"""
# Definition for Employee.
class Employee:
    def __init__(self, id: int, importance: int, subordinates: List[int]):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
"""

class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        res = 0
        hashmap = {e.id: e for e in employees}
        queue = [id]
        while queue:
            cur = queue.pop(0)
            e = hashmap[cur]
            res += e.importance
            for i in e.subordinates:
                queue.append(i)
        return res

# @lc code=end

