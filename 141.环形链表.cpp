/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(!head or !head->next)
            return false;
        while(slow){
            if(fast->next and fast->next->next)
                fast = fast->next->next;
            else
            {
                return false;
            }
            slow = slow->next;
            if(fast == slow)
                return true;
        }
        return false;

        
    }
};
// @lc code=end

