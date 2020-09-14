#
# @lc app=leetcode.cn id=101 lang=python
#
# [101] 对称二叉树
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def dfs(root):
            if not root:
                res.append(None)
                return 
            dfs(root.left)
            res.append(root)
            dfs(root.right)
            return res
        
        def rdfs(root):
            if not root:
                rres.append(None) 
                return 
            rdfs(root.right)
            rres.append(root)
            rdfs(root.left)
            return rres
        res = []
        rres = []
        dfs(root)
        rdfs(root)

        return res == rres

        
        
# @lc code=end

