/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr) return 0;
        int ans = 0;
        if(root->left != nullptr){
            if(root->left->left == nullptr && root->left->right == nullptr) ans += root->left->val;
            else
                ans += sumOfLeftLeaves(root->left);
        }
        if(root->right != nullptr)
            ans += sumOfLeftLeaves(root->right);
        return ans;
    }
};
// @lc code=end

