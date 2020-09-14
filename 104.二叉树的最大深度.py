#
# @lc app=leetcode.cn id=104 lang=python
#
# [104] 二叉树的最大深度
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    res = 0
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        tmp = 0
        self.DFS(tmp, root)
        return self.res
    def DFS(self, tmp, tree):
        if not tree:
            self.res = max(self.res, tmp)
            return 
        tmp += 1
        self.DFS(tmp, tree.left)
        self.DFS(tmp, tree.right)
# @lc code=end

