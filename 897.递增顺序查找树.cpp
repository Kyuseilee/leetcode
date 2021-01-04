/*
 * @lc app=leetcode.cn id=897 lang=cpp
 *
 * [897] 递增顺序查找树
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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* res = helper(root->left);
        root->left = nullptr;
        res->right = helper(root->right);
        return res;
    }
    TreeNode* helper(TreeNode* node)
    {
        if(!node)
            return nullptr;
        else if(!node->left and !node->right)
            return node;
        if(node->left)
        {
            TreeNode* root = helper(node->left);
            node->left = nullptr;
            root->right = node;
            return root;
        }
        return nullptr;
        

    }
};
// @lc code=end

