/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int sum) {
        return helper(root, 0, sum);
    }
    bool helper(TreeNode*root, int target, int sum){
        if(!root)
            return false;
        else if(root and !root->left and !root->right)
            return target + root->val == sum;
        else{
            return helper(root->left, target + root->val) or helper(root->right, target + root->val);
        }

    }

};
// @lc code=end

