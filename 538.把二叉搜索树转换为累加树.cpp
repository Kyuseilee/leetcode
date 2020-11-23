/*
 * @lc app=leetcode.cn id=538 lang=cpp
 *
 * [538] 把二叉搜索树转换为累加树
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
    int cur_val = 0;
    TreeNode* convertBST(TreeNode* root) {
        helper(root);
        return root;
    }
    int helper(TreeNode* root)
    {
        if(!root)
            return 0;
        if(!root->left and !root->right)
        {
            cur_val += root->val;
            root->val = cur_val;
            return cur_val;
        }
        if(root->right){
            helper(root->right);
        }
        root->val += cur_val;
        cur_val = root->val;
        if(root->left){
            helper(root->left);
        }
        return 0;
    }
};
// @lc code=end

