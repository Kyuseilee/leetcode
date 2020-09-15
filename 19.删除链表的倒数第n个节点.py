#
# @lc app=leetcode.cn id=19 lang=python
#
# [19] 删除链表的倒数第N个节点
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        node = ListNode(0)
        node.next = head

        slow, fast = node, node
        for i in range(n):
            fast = fast.next
        
        while fast and fast.next:
            slow, fast = slow.next, fast.next
        
        slow.next = slow.next.next
        return node.next

        
# @lc code=end

