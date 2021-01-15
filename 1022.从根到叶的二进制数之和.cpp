/*
 * @lc app=leetcode.cn id=1022 lang=cpp
 *
 * [1022] 从根到叶的二进制数之和
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
    int sum = 0;
    int sumRootToLeaf(TreeNode* root) {
        helper(root, 0);
        return sum;
    }
    void helper(TreeNode* root, int val){
        if(!root)
            return ;
        if(!root->left and !root->right){
            sum += (val << 1 | root->val);
            return ;
        }
        helper(root->left, val<< 1 | root->val);
        helper(root->right, val << 1 | root->val);
        
    }
};
// @lc code=end

