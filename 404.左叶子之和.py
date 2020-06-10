#
# @lc app=leetcode.cn id=404 lang=python
#
# [404] 左叶子之和
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.res = 0
        def sumof(root):
            if not root:
                return 0
            if root.left and not root.left.left and not root.left.right:
                self.res += root.left.val
            sumof(root.left)
            sumof(root.right)
        sumof(root)
        return self.res
# @lc code=end

