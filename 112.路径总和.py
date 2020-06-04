#
# @lc app=leetcode.cn id=112 lang=python
#
# [112] 路径总和
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if not root: return False
        stack = [(root.val, root)]
        while stack:
            sum_, node = stack.pop(0)
            if node.right:
                stack.append((sum_ + node.right.val, node.right))
            if node.left:
                stack.append((sum_ + node.left.val, node.left))
            if not node.left and not node.right and sum_ == sum:
                return True
        return False
# @lc code=end

