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
        if (!t) return "";
        s += to_string(t->val);
        if(t->left) {
            s += '(';
            tree2str(t->left);
            s+= ')';
        }
        if(t->right){
            if (t->left == nullptr){
                s += '(';
                s += ')';
            }
            s += '(';
            tree2str(t->right);
            s += ')';
        }
        return s;
    }
};
// @lc code=end

