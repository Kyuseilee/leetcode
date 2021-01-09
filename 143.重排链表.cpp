/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast and fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* res = new ListNode(-1);
        res->next = head;
        ListNode* result = res;
        
        ListNode* node = nullptr;
        ListNode* cur = slow;
        while(cur){
            ListNode* tmp = cur->next;
            cur->next = node;
            node = cur;
            cur = tmp;
        }
        while(node and head){
            res->next = head;
            if(head == slow)
            {
                res->next = nullptr;
                break;
            }
            head = head->next;
            res = res->next;

            res->next = node;
            node = node->next;
            res = res->next;
        }
        while(node){
            res->next = node;
            node = node->next;
            res = res->next;
        }
        head = result->next;
        return ;
    }
};
// @lc code=end
