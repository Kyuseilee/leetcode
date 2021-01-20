/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* res = new ListNode(-1);
        res->next = head;

        ListNode* pre = res;
        int count = 1;
        ListNode* ttmp = head->next;

        while(head)
        {
            if(count == k)
            {
                ttmp = head->next;
                ListNode *tmppre = pre->next;
                

                ListNode* node = nullptr;
                ListNode* cur = pre->next;
                while(cur and count)
                {
                    ListNode* tmp = cur->next;
                    cur->next = node;
                    node = cur;
                    cur = tmp;
                    count--;
                }
                if(ttmp)
                    cur = ttmp;
                pre->next = node;
                pre = tmppre;
                pre->next = cur;
                head = cur;

                count = 1;
            }
            else
            {
                head = head->next;
                count++;
            }
        }
        return res->next;
    }
};
// @lc code=end

