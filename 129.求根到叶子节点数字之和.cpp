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
    int ans, sum = 0;
    void dfs(TreeNode* root, int sum){
        sum = sum*10 + root->val;
        if(root->left == nullptr and root->right == nullptr){
            ans += sum;
        }
        if(root->left) dfs(root->left, sum);
        if(root->right) dfs(root->right, sum);
    }
    int sumNumbers(TreeNode* root) {
        if(root == nullptr) return 0;
        else dfs(root, sum);
        return ans;
    }
};
// @lc code=end

