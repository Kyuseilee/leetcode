#
# @lc app=leetcode.cn id=129 lang=python
#
# [129] 求根到叶子节点数字之和
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sumNumbers(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        from collections import deque
        if not root:
            return 0
        stack = [(root, str(root.val))]
        res = 0
        while stack:
            node, sum = stack.pop(0)
            if node.left:
                stack.append((node.left, sum+str(node.left.val)))
            if node.right:
                stack.append((node.right, sum+str(node.right.val)))
            if not node.left and not node.right:
                res += int(sum)
        return res
# @lc code=end

