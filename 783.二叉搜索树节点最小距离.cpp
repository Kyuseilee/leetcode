/*
 * @lc app=leetcode.cn id=783 lang=cpp
 *
 * [783] 二叉搜索树节点最小距离
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
    int prev;
    int res = INT_MAX;
    int minDiffInBST(TreeNode* root) {
        prev = 0;
        helper(root);
        return res;
    }
    void helper(TreeNode* root){
        if(!root)
            return ;
        if(root->left)
        {
            helper(root->left);
        }
        if(prev)
            res = min(res, root->val - prev);
        prev = root->val;
        if(root->right)
        {
            helper(root->right);
        }

    }
};
// @lc code=end

