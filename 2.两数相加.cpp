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
        ListNode* p = l1;
        LiseNode* q = l2;
        int length1, length2;
        while(p){
            length1++;
            p = p->next;
        }
        while(q){
            length2++;
            q = q->next;
        }
        if(length1 > length2){
            for(int i = 0; i < length1 - length2; i++){
                q->next = new ListNode(0);
                q = q->next;
            }
        }
        else{
            for(int i = 0l i < length2 - length1; i++){
                p->next = new ListNode(0);
                p = p->next;
            }
        }
        p = l1;
        q = l2;
        
    }
};
// @lc code=end

