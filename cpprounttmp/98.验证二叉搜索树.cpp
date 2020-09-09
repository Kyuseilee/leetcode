/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> stack;
        long long inorder = (long long)INT_MIN - 1;
        while(!stack.empty() || root != nullptr){
            while(root != nullptr){
                stack.push(root);
                root = root->left;
            }
            root = stack.top();
            stack.pop();
            if (root->val <= inorder) return false;
            inorder = root->val;
            root = root->right;
        }
        return true;
    }
};
// @lc code=end

