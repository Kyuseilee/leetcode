/*
 * @lc app=leetcode.cn id=606 lang=cpp
 *
 * [606] 根据二叉树创建字符串
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
    string s = "";
    string tree2str(TreeNode* t) {
        helper(t);
        return s;
    }
    void helper(TreeNode* root){
        if(!root)
            return ;
        s = s+  to_string(root->val);
        if(root->left and root->right){
            s += "(";
            helper(root->left);
            s += ")(";
            helper(root->right);
            s += ")";
        }
        else if(root->right)
        {
            s += "()(";
            helper(root->right);
            s += ")";
        }
        else if(root->left){
            s += "(";
            helper(root->left);
            s += ")";
        }
}
};
// @lc code=end

