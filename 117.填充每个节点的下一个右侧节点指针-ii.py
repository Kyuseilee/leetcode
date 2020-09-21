#
# @lc app=leetcode.cn id=117 lang=python
#
# [117] 填充每个节点的下一个右侧节点指针 II
#

# @lc code=start
"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution(object):
    def connect(self, root):
        """
        :type root: Node
        :rtype: Node
        """
        from collections import deque
        if not root:
            return root
        queue = deque()
        queue.appendleft(root)
        while queue:
            p = None
            n = len(queue)
            for _ in range(n):
                tmp = queue.pop()
                if p:
                    p.next = tmp
                    p = p.next
                else:
                    p = tmp
                if tmp.left:
                    queue.appendleft(tmp.left)
                if tmp.right:
                    queue.appendleft(tmp.right)
            p.next = None
        return root
        
# @lc code=end

