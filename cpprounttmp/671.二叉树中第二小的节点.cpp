/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
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
    int findSecondMinimumValue(TreeNode* root) {
        if(!root or !root->left or !root->right) return -1;

        int left = root->left->val, right = root->right->val;

        if(root->val == root->left->val) left = findSecondMinimumValue(root->left);
        if(root->val == root->right->val) right = findSecondMinimumValue(root->right);

        if(root->val == left and root->val == right) return -1;

        int min_lr = min(left, right);
        if(root->val < min_lr) return min_lr;
        else return max(left, right);

    }
};
// @lc code=end

