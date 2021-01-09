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
        int count = 1;
        ListNode* res = new ListNode(-1);
        res->next = head;
        bool flag = false;
        ListNode* slow = res;
        bool used = false;
        ListNode* heads = res;

        while(head){
            if(count == k)
            {
                ListNode* node = head->next;
                head = head->next;
                while(count > 1){
                    ListNode* tmp = slow->next;
                    slow->next = node;
                    if(!used)
                    {
                        heads = slow;
                        used = true;
                    }
                    node = slow;
                    slow = tmp;
                    slow->next = node;
                    count--;
                }
                if(!flag){
                    flag = true;
                    res->next = slow;
                }
                count = 1;
                used = false;
            }
            if(count == 1)
                slow = head;
            count++;
            head = head->next;
        }
        return res->next;
    }
};
// @lc code=end

