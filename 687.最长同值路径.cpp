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
        return helper(root, root->val);
    }
    int helper(TreeNode* root, int val){
        int path = 0;
        if(!root)
            return 0;
        if(root->val != val){
            path = 0;
            return max(helper(root->left, root->left->val), helper(root->right, root->right->val));
        }
        return 1+helper(root->left, val) + helper(root->right, val);
    }
};
// @lc code=end

