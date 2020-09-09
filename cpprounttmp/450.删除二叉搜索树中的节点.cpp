/*
 * @lc app=leetcode.cn id=450 lang=cpp
 *
 * [450] 删除二叉搜索树中的节点
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val > key){
            root->left = deleteNode(root->left, key);
            return root;
        }
        if(root->val < key){
            root->right = deleteNode(root->right, key);
            return root;
        }
        if(!root->left){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        if(!root->right){
            TreeNode* temp  = root->left;
            delete root;
            return temp;
        }
        TreeNode* temp = root->right;
        while(temp->left) temp = temp->left;
        swap(root->val, temp->val);
        root->right = deleteNode(root->right, key);
        return root;

    }
};
// @lc code=end

