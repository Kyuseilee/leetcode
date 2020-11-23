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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int total_slope = 0;
    int findTilt(TreeNode* root) {
        helper(root);
        return total_slope;
    }
    int helper(TreeNode* root){
        if(!root)
            return 0;
        if(!root->left and !root->right)
            return root->val;

        int L = helper(root->left);
        int R = helper(root->right);
        total_slope += abs(L-R);
        root->val = root->val + L + R;
        return root->val;
        
    }
};
// @lc code=end

