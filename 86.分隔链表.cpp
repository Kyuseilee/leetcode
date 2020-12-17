/*
 * @lc app=leetcode.cn id=86 lang=cpp
 *
 * [86] 分隔链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* l1 = new ListNode(-1);
        ListNode* start = l1;
        ListNode* l2 = new ListNode(-1);
        ListNode* start2 = l2;
        while(head){
            if(head->val < x)
            {
                l1->next = new ListNode(head->val);
                l1 = l1->next;
            }
            else{
                l2->next = new ListNode(head->val);
                l2 = l2->next;
            }
            head = head->next;
        }
        l1->next = start2->next;
        return start->next;
    }
};
// @lc code=end

