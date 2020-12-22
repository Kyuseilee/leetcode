/*
 * @lc app=leetcode.cn id=148 lang=cpp
 *
 * [148] 排序链表
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
    ListNode* sortList(ListNode* head) {
        if(!head)
            return nullptr;
        ListNode* res = new ListNode(-1);
        ListNode* travel = head->next;
        ListNode* pre = head;
        res->next = head;
        while(travel){
            if(travel->val < pre->val){
                if(travel->val < res->next->val)
                {
                    pre->next = travel->next;
                    travel->next = res->next;
                    res->next = travel;
                    travel = pre->next;
                }
                else{
                    ListNode* tmp = res;
                    while(travel->val > tmp->next->val)
                        tmp = tmp->next;
                    pre->next = travel->next;
                    travel->next = tmp->next;
                    tmp->next = travel;
                    travel = pre->next;
                }
            }
            else{
                travel = travel->next;
                pre = pre->next;
            }
        }
        return res->next;
    }
};
// @lc code=end

