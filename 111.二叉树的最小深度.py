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
        if not root: return 0
        queue = [(1, root)]
        while queue:
            depth, node = queue.pop(0)
            if not node.left and not node.right:
                return depth
            if node.left:
                queue.append((depth+ 1, node.left))
            if node.right:
                queue.append((depth+ 1, node.right))
# @lc code=end

