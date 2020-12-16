/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* node = head;

        int carry = 0;
        while(l1 and l2){
            head->next = new ListNode((l1->val + l2->val + carry) % 10);
            if(l1->val + l2->val+carry > 9)
                carry = 1;
            else carry = 0;
            l1 = l1->next;
            l2 = l2->next;
            head = head->next;
        }
        while(l1)
        {
            head->next= new ListNode((l1->val+carry) %10);
            if(l1->val + carry> 9)
                carry = 1;
            else
            {
                carry = 0;
            }
            head = head->next;
            l1 = l1->next;
        }
        while(l2)
        {
            head->next= new ListNode((l2->val+carry) %10);
            if(l2->val + carry> 9)
                carry = 1;
            else
            {
                carry = 0;
            }
            head = head->next;
            l2 = l2->next;
        }
        if(carry)
            head->next = new ListNode(1);

        return node->next;
    }
};
// @lc code=end

