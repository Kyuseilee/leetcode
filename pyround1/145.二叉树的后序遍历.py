#
# @lc app=leetcode.cn id=145 lang=python
#
# [145] 二叉树的后序遍历
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if not root: return []
        stack = []
        p = root 
        res = []
        flag = []
        while p or stack:
            while p:
                flag.append(0)
                stack.append(p)
                p = p.left
            while stack and flag[-1] == 1:
                flag.pop()
                res.append(stack.pop().val)
            if stack:
                flag[-1] = 1
                p = stack[-1].right
        return res
        
# @lc code=end

