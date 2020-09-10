#
# @lc app=leetcode.cn id=2 lang=python
#
# [2] 两数相加
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        count = 0
        head = ListNode(0)
        node = head
        while l1 or l2:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0 
            total = x + y + count
            count = total // 10
            node.next = ListNode(total%10)
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
            node = node.next
        if count != 0:
            node.next = ListNode(1)
        return head.next
            
            
# @lc code=end

