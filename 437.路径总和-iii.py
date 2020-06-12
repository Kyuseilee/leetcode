#
# @lc app=leetcode.cn id=437 lang=python
#
# [437] 路径总和 III
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        if not root :
            return 0
        
        stack = [(root, [root.val])]
        res = 0

        while stack:
            node, temp = stack.pop()
            res += temp.count(sum)
            temp += [0]
            if node.left:
                arr = [i+node.left.val for i in temp]
                stack.append((node.left,arr))
            if node.right:
                arr = [i+node.right.val for i in temp]
                stack.append((node.right, arr))
        return res
        
# @lc code=end

