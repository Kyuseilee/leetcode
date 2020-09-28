#
# @lc app=leetcode.cn id=113 lang=python
#
# [113] 路径总和 II
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
        :rtype: List[List[int]]
        """
        res = []
        if not root:
            return []
        
        def helper(root, sum, tmp):
            if not root:
                return
            if not root.left and not root.right and sum - root.val == 0:
                tmp += [root.val]
                res.append(tmp)
                return 
            helper(root.left, sum-root.val, tmp+[root.val])
            helper(root.right, sum-root.val, tmp+[root.val])
        helper(root, sum, [])
        return res
            

# @lc code=end

