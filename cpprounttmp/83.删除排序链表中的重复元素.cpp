/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
        if(!head or !head->next) return head;
        auto current = head;
        while(current->next and current){
        if (current->next->val == current->val)
        {
            current->next = current->next->next;
        }
        else{
            current = current->next;
        }
        }
        return head;
    }
};
// @lc code=end

