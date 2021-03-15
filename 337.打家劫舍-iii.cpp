/*
 * @lc app=leetcode.cn id=337 lang=cpp
 *
 * [337] 打家劫舍 III
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
    int rob(TreeNode* root) {
        vector<int>res = robDfs(root);
        return max(res[0], res[1]);
    }
    vector<int> robDfs(TreeNode* root)
    {
        if(root == nullptr)
            return {0, 0};
        vector<int>left = robDfs(root->left);
        vector<int>right = robDfs(root->right);
        int val1 = root->val + left[0] + right[0];
        int val2 = max(left[0], left[1]) + max(right[0], right[1]);
        return {val2, val1};
    }
};
// @lc code=end

