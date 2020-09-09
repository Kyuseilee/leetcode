/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    int ans = 0;
    void dfs(TreeNode* node, int sum){
        if (node == nullptr) return ;
        sum -= node->val;
        if(sum == 0)
            ans++;
        dfs(node->left, sum);
        dfs(node->right, sum);

    }
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr)
            return ans;
        dfs(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return ans;

    }
};
// @lc code=end

