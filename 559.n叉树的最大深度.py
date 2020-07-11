#
# @lc app=leetcode.cn id=559 lang=python
#
# [559] N叉树的最大深度
#

# @lc code=start
"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: Node
        :rtype: int
        """
        if not root: return 0
        if root.children:
            depth_children = [self.maxDepth(node) for node in root.children]
        else:
            return 1
        return max(depth_children) + 1
        
# @lc code=end

