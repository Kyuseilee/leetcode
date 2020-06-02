#
# @lc app=leetcode.cn id=111 lang=python
#
# [111] 二叉树的最小深度
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if (not root): return 0
        if (not root.left): self.minDepth(self.right) + 1
        if (not root.right): self.minDepth(self.left) + 1
        return min(self.minDepth(root.left), self.minDepth(root.right)) + 1
# @lc code=end

