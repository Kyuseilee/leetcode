/*
 * @lc app=leetcode.cn id=563 lang=cpp
 *
 * [563] 二叉树的坡度
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
    int dfs(TreeNode* root){
        if (root == nullptr) return 0;
        return root->val + dfs(root->left) + dfs(root->right);
    }
    int findTilt(TreeNode* root) {
        if (!root) return 0;
        return abs(dfs(root->left) -dfs(root->right)) + findTilt(root->left) + findTilt(root->right);


    }
};
// @lc code=end

