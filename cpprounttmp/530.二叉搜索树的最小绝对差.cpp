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
    void dfs(TreeNode* root, int&prev, int& res){
        if(root == nullptr) return ;
        dfs(root->left,prev, res);
        if(prev>=0) res = min(res, root->val - prev);
        prev = root->val;
        dfs(root->right, prev, res);
    }
    int getMinimumDifference(TreeNode* root) {
        int prev = -1;
        int res = INT_MAX;
        dfs(root, prev, res);
        return res;

    }
};
// @lc code=end

