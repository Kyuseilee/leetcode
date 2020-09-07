/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) return res;

        TreeNode* cur = root;
        deque<TreeNode*> dq;
        TreeNode* prev = nullptr;

        int max_times = 0;
        int cur_times = 1;
        while(cur!= nullptr or !dq.empty()){
            if(cur != nullptr){
                dq.push_back(cur);
                cur = cur->left;
            }
            else{
                cur = dq.back();
                dq.pop_back();

                if (prev != nullptr){
                    if(prev->val == cur->val)
                        cur_times++;
                    else
                        cur_times = 1;
                }
            
            if(cur_times == max_times) res.push_back(cur->val);

            else if (cur_times > max_times){
                res.clear();
                res.push_back(cur->val);
                max_times = cur_times;
            }

            prev = cur;
            cur = cur->right;
        }
        }
        return res;
    }
};
// @lc code=end

