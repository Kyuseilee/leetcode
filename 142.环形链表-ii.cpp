/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> res;
        ListNode* first = head;
        int count = 1;
        while(first){
            if(res[first] >1)
                return first;
            res[first] += count;
            first = first->next;
        }
        return nullptr;
    }
};
// @lc code=end

