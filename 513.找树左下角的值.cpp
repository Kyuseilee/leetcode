/*
 * @lc app=leetcode.cn id=513 lang=cpp
 *
 * [513] 找树左下角的值
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
    int res = 0;
    int maxlevel = 0;
    void helper(TreeNode* root, int level){
        if(root == nullptr) return ;
        helper(root->left, level+1);
        if(level > maxlevel){
            maxlevel = level;
            res = root->val;
        }
        helper(root->right, level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        helper(root, 1);
        return res;


    }
};
// @lc code=end

