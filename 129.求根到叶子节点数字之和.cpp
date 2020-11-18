/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根到叶子节点数字之和
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
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        return helper(root, 0);
    }
    int helper(TreeNode* root, int curval){
        if(!root)
            return 0;
        else if(!root->left and !root->right)
            return curval + root->val;
        else
        {
            curval += root->val;
            curval = curval*10;
            return helper(root->left, curval) + helper(root->right, curval);
        }
        
    }
};
// @lc code=end

