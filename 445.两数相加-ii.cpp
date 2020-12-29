/*
 * @lc app=leetcode.cn id=445 lang=cpp
 *
 * [445] 两数相加 II
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
        ListNode* res = new ListNode(-1);
        ListNode* tv1 = l1;
        ListNode* tv2 = l2;
        
        int length1 = 1, length2 = 1;
        while(tv1){
            tv1 = tv1->next;
            length1++;
        }
        while(tv2){
            tv2 = tv2->next;
            length2++;
        }
        if(length1 < length2){
            swap(l1, l2);
            swap(length1, length2);
        }
        res->next = l1;
        helper(length1, length2, l1, l2, res->next);
        return res->next;

    }
    bool helper(int length1, int length2, ListNode*l1, ListNode*l2, ListNode* res){
        if(!l1 or ! l2)
            return 0;
        if(length1 > length2){
            res->val = l1->val;
            length1--;
            helper(length1, length2, l1->next, l2, res->next);
        }
        else{
            res->val = l1->val + l2->val + helper(length1, length2, l1->next, l2->next, res->next);
            if(res->val >= 10)
                res->val -= 10;

        }
    }
};
// @lc code=end

