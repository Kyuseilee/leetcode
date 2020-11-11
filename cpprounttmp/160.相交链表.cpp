/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA or !headB) return nullptr;
        ListNode* countA = headA;
        ListNode* countB = headB;
        int lA = 0;
        int lB = 0;
        while(countA){
            ++lA;
            countA = countA->next;
        }
        while(countB){
            ++lB;
            countB = countB->next;
        }
        int i = max(lA, lB) - min(lA, lB);
        if(lA > lB) for(i; i > 0; --i) headA = headA->next;
        else
        {
            for(i; i>0; --i) headB = headB->next;
        }
        while(headA){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};
// @lc code=end

