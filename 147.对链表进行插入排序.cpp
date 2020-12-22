/*
 * @lc app=leetcode.cn id=147 lang=cpp
 *
 * [147] 对链表进行插入排序
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
    ListNode* insertionSortList(ListNode* head) {
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

