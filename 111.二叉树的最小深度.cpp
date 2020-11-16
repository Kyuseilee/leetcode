/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        return helper(root);
        
    }
    int helper(TreeNode*root){
        if(!root) 
            return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        if(left == 0)
            return right + 1;
        else if(right == 0)
            return left+ 1;
        else
            return 1 + min(left, right);
    }
};
// @lc code=end

