/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return nullptr;
        if(!head->next)
            return head;
        ListNode* pre = new ListNode(-1);
        pre->next = head;
        ListNode* res = pre;
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast){
            pre->next = fast;
            slow->next = fast->next;
            fast->next = slow;
            pre = slow;
            slow = slow->next;
            if(!slow)
                break;
            fast = slow->next;
        }
        return res->next;

    }
};
// @lc code=end

