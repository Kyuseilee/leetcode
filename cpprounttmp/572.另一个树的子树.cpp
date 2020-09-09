/*
 * @lc app=leetcode.cn id=572 lang=cpp
 *
 * [572] 另一个树的子树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s) return false;
        return isSubtree(s->left, t) || sameTree(s, t) || isSubtree(s->right, t);
    }
    bool sameTree(TreeNode*s, TreeNode* t){
        if(s == nullptr && t == nullptr) return true;
        if(s == nullptr or t == nullptr) return false;
        return s->val == t->val and sameTree(s->left, t->left) and sameTree(s->right, t->right);
    }
};
// @lc code=end

