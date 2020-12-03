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
        ListNode* Node = head;
        while(Node and Node->next){
            while(Node->next and Node->val == Node->next->val){
                ListNode* tmp = Node->next;
                Node->next = Node->next->next;
                tmp->next = nullptr;
            }
            Node = Node->next;
        }
        return head;
        
    }
};
// @lc code=end

