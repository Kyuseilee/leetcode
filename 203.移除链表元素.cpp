/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* node = new ListNode(-1);
        ListNode* res = node;
        node->next = head;
        while(node and node->next){
            while(node->next and node->next->val == val){
                if(node->next->next)
                    node->next = node->next->next;
                else{
                    node->next = nullptr;
                }
            }
            node = node->next;
        }
        return res->next;

    }
};
// @lc code=end

