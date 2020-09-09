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
        int len1 = 1;
        int len2 = 1;
        ListNode* p = l1;
        ListNode* q = l2;
        while(p->next != nullptr){
            len1++;
            p = p->next;
        }
        while(q->next != nullptr){
            len2++;
            q = q->next;
        }

        if(len1>len2){
            for(int i = 0; i < len1 - len2; i++){
                q->next = new ListNode(0);
                q = q->next;
            }
        }
        else{
            for(int i = 0; i < len2 - len1; i++){
                p->next = new ListNode(0);
                p = p->next;
            }
        }
        p = l1;
        q = l2;
        bool count = false;
        ListNode* l3 = new ListNode(-1);
        ListNode* w = l3;
        int i = 0;
        while(p != nullptr && q != nullptr){
            i = count + p->val + q->val;
            w->next = new ListNode(i%10);
            count = i>=10? true:false;
            w = w->next;
            p = p->next;
            q = q->next;
        }
        if(count){
            w->next = new ListNode(1);
            w = w->next;
        }
        return l3->next;
        
    }
};
// @lc code=end

