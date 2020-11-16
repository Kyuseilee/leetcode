/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        return abs(maxDepth(root->left) - maxDepth(root->right)) <= 1 and isBalanced(root->left) and isBalanced(root->right);
    }
    int maxDepth(TreeNode* root){
        if(!root)
            return 0;
        return 1 + max(maxDepth(root->left) , maxDepth(root->right));
        
    }

};
// @lc code=end

