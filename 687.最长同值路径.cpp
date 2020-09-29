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
    int help(TreeNode* node, int &ans){
        if(node == nullptr) return 0;

        int left = help(node->left, ans);
        int right = help(node->right, ans);

        left = (node->left != nullptr and node->val == node->left->val) ? left + 1: 0;
        right = (node->right != nullptr and node->val == node->right->val) ? right + 1: 0;

        ans = max(ans, left + right);
        return max(left, right);
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        help(root, ans);
        return ans;
        

    }
};
// @lc code=end

