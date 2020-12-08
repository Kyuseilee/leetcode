/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        return helper(root);
    }
    string helper(TreeNode* root){
        if(!root){
            return "";
        }
        else if(!root->left and !root->right)
        {
            
        }
        if(root->left)
        {
            return to_string(root->val) + "->" + helper(root->left);

        }
        s += to_string(root->val);
        if(root->right){
            s += to_string(root->val) + "->" + helper(root->right);
            res.push_back(s);
        }
        return s;

    }
};

// @lc code=end

