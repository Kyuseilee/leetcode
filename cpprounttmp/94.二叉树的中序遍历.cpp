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
    void Traversal(TreeNode* cur, vector<int>& vec)
    {
        if (cur == nullptr) return ;
        Traversal(cur->left, vec);
        vec.push_back(cur->val);
        Traversal(cur->right, vec);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        Traversal(root, result);
        return result;
        
    }
};
// @lc code=end

