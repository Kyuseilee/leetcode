/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> S;
        vector<int> v;
        TreeNode* rt = root;
        while(rt || S.size())
        {
            while(rt)
            {
                S.push(rt);
                rt = rt->left;
            }
            rt = S.top();
            S.pop();
            v.push_back(rt->val);
            rt = rt->right;
        }
        return v;
    }
};
// @lc code=end

