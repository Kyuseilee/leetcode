/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>tmp;
        tmp.clear();
        for(auto ch : lists){
            while(ch){
                tmp.push_back(ch->val);
                ch = ch->next;
            }
        }
        sort(tmp.begin(), tmp.end());
        ListNode* res = new ListNode(-1);
        ListNode* head = res;
        for(auto num : tmp){
            ListNode* tmp = new ListNode(num);
            head->next = tmp;
            head = tmp;
        }
        head->next = nullptr;
        return res->next;
    }
};
// @lc code=end

