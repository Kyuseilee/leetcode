/*
 * @lc app=leetcode.cn id=700 lang=cpp
 *
 * [700] 二叉搜索树中的搜索
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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res = root;
        if(!root)
            return nullptr;
        if(res->val == val)
            return res;
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;
        if(root->left) left = searchBST(root->left, val);
        if(root->right) right = searchBST(root->right, val);
        return left ? left : right? right : nullptr;
        
    }
};
// @lc code=end

