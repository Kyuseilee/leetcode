/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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
    vector<int> res;
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        int min_val = INT_MAX;
        for(int i = 1; i < res.size(); i++){
            min_val = min(min_val, res[i] - res[i-1]);
        }
        return min_val;
    }
    void helper(TreeNode* root ){
        if (!root)
            return ;
        if(root->left)
        {
            helper(root->left);
        }
        res.push_back(root->val);
        if(root->right)
        {
            helper(root->right);
        }
    }
};
// @lc code=end

