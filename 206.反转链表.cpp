/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        ListNode* node = nullptr;
        ListNode* cur = head;
        while(cur)
        {
            ListNode* tmp = cur->next;
            cur->next = node;
            node = cur;
            cur = tmp;

        }

        return node;
    }
};
// @lc code=end

