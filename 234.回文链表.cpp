/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        if(!head)
            return true;
        while(head){
            res.push_back(head->val);
            head = head->next;
        }
        int j = res.size() -1;
        int i = 0;
        while(i <= j){
            if(res[i] != res[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

