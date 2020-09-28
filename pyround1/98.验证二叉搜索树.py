#
# @lc app=leetcode.cn id=98 lang=python
#
# [98] 验证二叉搜索树
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.dg(root, -(2**32), 2**32)

    def dg(self, root, min_v, max_v):
        if root == None:
            return True
        if root.val < max_v and root.val > min_v:
            pass
        else:
            return False
        
        if not self.dg(root.left, min_v, root.val):
            return False
        if not self.dg(root.right, root.val, max_v):
            return False
        
        return True
# @lc code=end

