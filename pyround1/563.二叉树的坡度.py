#
# @lc app=leetcode.cn id=563 lang=python
#
# [563] 二叉树的坡度
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def __init__(self):
        self.slope = 0

    def findTilt(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """

        ans = 0
        def f(r):
            if not r:
                return 0
            sumleft, sumright = f(r.left), f(r.right)
            nonlocal ans
            ans += abs(sumleft - sumright)
            return sumleft + sumright + r.val
        f(root)
        return ans

# @lc code=end

