/*
 * @lc app=leetcode.cn id=1038 lang=cpp
 *
 * [1038] 把二叉搜索树转换为累加树
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
    int val = 0;
    TreeNode* bstToGst(TreeNode* root) {
        helper(root);
        return root;
    }
    void helper(TreeNode*root)
    {
        if(!root)
            return ;
        if(!root->left and !root->right)
        {
            root->val += val;
            val = root->val;
            return ;
        }
        helper(root->right);
        root->val += val;
        val = root->val;
        helper(root->left);
    }
};
// @lc code=end

