/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return nullptr;
        int length = 0;
        ListNode* l = head;
        while(l){
            l = l->next;
            length++;
        }
        k = k%length;
        ListNode* res = new ListNode(-1);
        res->next = head;
        while(k){
            ListNode* node = res->next;
            ListNode* former = res->next;
            while(former->next){
                if(!former->next->next)
                    break;
                former = former->next;
            }
            while(node and node->next){
                node = node->next;
            }
            node->next = res->next;
            res->next = node;
            former->next = nullptr;
            k--;
        }
        return res->next;

    }
};
// @lc code=end

