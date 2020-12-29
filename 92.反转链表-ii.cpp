/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* node = new ListNode(-1);
        ListNode* pre = node;
        node->next = head;

        ListNode* cur = head;
        int count = 1;

        while(count < m){
            if(!cur)
                return head;
            if(count+1 == m)
            {
                pre = cur;
            }
            cur = cur->next;
            count++;
        }
        while(count < n and cur)
        {
            ListNode* tmp = cur->next;
            cur->next = tmp->next;
            tmp->next = pre->next;
            pre->next = tmp;
            count++;
            cout << tmp->val << " " << pre->val << " " << cur->val << "\n";
        }
        return node->next;
    }
};
// @lc code=end

