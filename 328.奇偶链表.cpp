/*
 * @lc app=leetcode.cn id=328 lang=cpp
 *
 * [328] 奇偶链表
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
    ListNode* oddEvenList(ListNode* head){
        if(!head)
            return nullptr;
        if(!head->next)
            return head;
        ListNode* res = new ListNode(-1);
        ListNode* fast = head;
        ListNode* slow = head;
        res->next = head;
        
        int count = 1;
        while(count){
            if(count % 2 == 1)
            {
                if(!fast->next or !fast->next->next)
                    break;
                fast = fast->next->next;
            }
            count++;
        }
        int val = fast->val;
        count = 1;
        ListNode * cur = fast;
        while(slow != cur){
            if(count % 2 == 0)
            {
                ListNode* tmp = slow->next;
                slow->next = slow->next->next;
                tmp->next = fast->next;
                fast->next = tmp;
                fast = fast->next;
                slow = slow->next;
            }
            count++;
        }
        return res->next;
    }
};
// @lc code=end

