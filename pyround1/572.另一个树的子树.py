#
# @lc app=leetcode.cn id=572 lang=python
#
# [572] 另一个树的子树
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def identical(self, node_a, node_b):
        if not node_a and not node_b:
            return True
        if not node_a or not node_b:
            return False
        
        return node_a.val == node_b.val and self.identical(node_a.left, node_b.left) and self.identical(node_a.right, node_b.right)

    def isSubtree(self, s, t):
        """
        :type s: TreeNode
        :type t: TreeNode
        :rtype: bool
        """
        if not s:
            return False
        if self.identical(s, t):
            return True
        return self.isSubtree(s.left, t) or self.isSubtree(s.right, t)
        
# @lc code=end

