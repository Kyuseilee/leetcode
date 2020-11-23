/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int max_val = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return max_val;
        
        
    }
    int helper(TreeNode* root){
        if(!root)
            return 0;
        int L = helper(root->left);
        int R = helper(root->right);
        max_val = max(L+R, max_val);
        return max(L, R) + 1;

        
    }
    
};
// @lc code=end

