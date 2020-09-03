/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> res;
    vector<int> temp;

    void dfs(TreeNode* root, int resum){
        resum -= root->val;
        temp.push_back(root->val);
        if(resum == 0 && root->left == nullptr && root->right == nullptr)
            res.push_back(temp);
        if(root->left != nullptr) dfs(root->left, resum);
        if(root->right != nullptr) dfs(root->right, resum);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if (root) dfs(root, sum);
        return res;
    }
};
// @lc code=end

