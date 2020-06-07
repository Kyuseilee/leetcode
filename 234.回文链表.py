#
# @lc app=leetcode.cn id=234 lang=python
#
# [234] 回文链表
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if head == None or head.next == None:
            return True
        recnct, slow, fast = head, head, head

        newhead = None

        while fast and fast.next:
            fast = fast.next.next
            tmp = slow
            slow =slow.next
            tmp.next =newhead
            newhead = tmp
        recnct = slow
        ps = newhead
        pf = slow.next if fast else slow
        while pf:
            if ps.val !=pf.val:
                return False
            ps = ps.next
            pf = pf.next
        return True
# @lc code=end

