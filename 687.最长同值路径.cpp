/*
 * @lc app=leetcode.cn id=687 lang=cpp
 *
 * [687] 最长同值路径
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
    int max_length = 0;
    int longestUnivaluePath(TreeNode* root) {
        return helper(root);
    }
    int helper(TreeNode* root){
        int length = 0;
        if(!root)
            return 0;
        if(!root->right)
            return 0;
        else if(root->right->val == root->val){
            length += helper(root->right);
        }
        if(!root->left)
            return 0;
        else if(root->left->val == root->val){
            length += helper(root->left);
        }
        return length;
        return max(helper(root->left), helper(root->right));
    }
};
// @lc code=end

