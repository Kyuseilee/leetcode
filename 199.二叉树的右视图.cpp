/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 二叉树的右视图
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
    queue<TreeNode*> que;
    vector<int>stk;
    vector<int> rightSideView(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->left)
                que.push(node->left);
                if(node->right)
                que.push(node->right);
                if(i == n - 1)
                    stk.push_back(node->val);
            }
        }
        return stk;
    }
};
// @lc code=end

