#
# @lc app=leetcode.cn id=1022 lang=python3
#
# [1022] 从根到叶的二进制数之和
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def sumRootToLeaf(self, root: TreeNode) -> int:
        if not root :
            return 0
        res = []
        q = []
        q.append([root, '0b'])
        while q:
            node, tmp = q.pop(0)
            tmp += str(node.val)

            if node.left:
                q.append([node.left, tmp])
            if node.right:
                q.append([node.right, tmp])
            
            if not node.left and not node.right:
                res.append(tmp)
        
        return sum(int(bin_str, 2) for bin_str in res)
        
# @lc code=end

