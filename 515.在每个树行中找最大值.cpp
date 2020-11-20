/*
 * @lc app=leetcode.cn id=515 lang=cpp
 *
 * [515] 在每个树行中找最大值
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    queue<TreeNode*> que;
    vector<int>res;
    vector<int> largestValues(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        int max_val = root->val;
        while(!que.empty()){
            int n = que.size();
            max_val = que.front()->val;
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(max_val < node->val)
                    max_val = node->val;
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
            res.push_back(max_val);
        }
        return res;
    }
};
// @lc code=end

