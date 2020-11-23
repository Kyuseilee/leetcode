/*
 * @lc app=leetcode.cn id=617 lang=cpp
 *
 * [617] 合并二叉树
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1){
            return t2;
        }
        if(!t2){
            return t1;
        }
        TreeNode* tree = new TreeNode(t1->val + t2->val);
        tree->left = mergeTrees(t1->left, t2->left);
        tree->right = mergeTrees(t1->right, t2->right);
        return tree;

    }
};
// @lc code=end

