#
# @lc app=leetcode.cn id=21 lang=python
#
# [21] 合并两个有序链表
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        cur1 = l1
        cur2 = l2
        new = ListNode(0)

        state = new
        while l1 and l2:
            if l1.val <= l2.val:
                state.next = l1
                l1 = l1.next
            else:
                state.next = l2
                l2 = l2.next
            state = state.next
        state.next = l1 if l1 else l2
        return new.next
        
# @lc code=end

