#
# @lc app=leetcode.cn id=114 lang=python
#
# [114] 二叉树展开为链表
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def flatten(self, root):
        """
        :type root: TreeNode
        :rtype: None Do not return anything, modify root in-place instead.
        """
        while root:
            if root.left:
                sub_left = root.left
                while sub_left.right:
                    sub_left = sub_left.right
                sub_left.right = root.right
                root.right = root.left
                root.left = None
            root = root.right
        


# @lc code=end

