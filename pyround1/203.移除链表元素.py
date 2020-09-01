#
# @lc app=leetcode.cn id=203 lang=python
#
# [203] 移除链表元素
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        ans = ListNode(0)
        ans.next = head
        l = ans
        r = ans.next

        while r:
            if r.val == val:
                l.next = r.next
            else:
                l = l.next
            r = r.next
        return ans.next

# @lc code=end

