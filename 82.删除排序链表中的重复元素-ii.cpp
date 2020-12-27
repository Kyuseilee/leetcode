/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return nullptr;

        ListNode* res = new ListNode(-1);
        res->next = head;

        ListNode* fast = head->next;
        ListNode* slow = head;
        ListNode* pre = res;

        while(fast and slow){
            while(fast->val == slow->val){
                fast = fast->next;
            }
            pre->next = fast;
            slow = fast;
            fast = fast->next;
        }
        return res->next;
        
    }
};
// @lc code=end

