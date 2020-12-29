/*
 * @lc app=leetcode.cn id=725 lang=cpp
 *
 * [725] 分隔链表
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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> res;
        if(!root){
            while(k){
                res.push_back(nullptr);
                k--;
            }
            return res;
        }
        ListNode* tmp = root;
        int size = 0;
        while(tmp)
        {
            tmp = tmp->next;
            size++;
        }
        if(size <= k){
            while(root){
                res.push_back(new ListNode(root->val));
                root = root->next;
            }
            while(k-size){
                res.push_back(nullptr);
                k = k-1;
            }
            return res;
        }

        else{
            int group = size / k;
            vector<int> indicator(group, 0);
            int extra = size % k ;
            ListNode* fast = root;
            int count = 0;
            while(fast){
                count++;
                if(!extra){
                    if(count == group){
                        ListNode* cur = fast->next;
                        fast->next = nullptr;
                        res.push_back(root);
                        root = cur;
                        count = 0;
                        fast = root;
                    }
                    else{
                        fast = fast->next;
                    }
                }
                else {
                    if(count == group +1){
                        ListNode* cur = fast->next;
                        fast->next = nullptr;
                        res.push_back(root);
                        root = cur;
                        count = 0;
                        extra--;
                        fast = root;
                    }
                    else{
                        fast = fast->next;
                    }
                }
                if(!fast and root){
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
// @lc code=end

