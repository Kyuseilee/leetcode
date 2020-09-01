#
# @lc app=leetcode.cn id=538 lang=python
#
# [538] 把二叉搜索树转换为累加树
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def convertBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        self.num = 0
        def depth(root):
            if root is None:
                return 
            else:
                depth(root.right)
                self.num = self.num + root.val
                root.val = self.num
                depth(root.left)
                return root
        return depth(root)
# @lc code=end


