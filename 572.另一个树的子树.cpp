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
        if(!s and !t)
            return true;
        else if(!s or !t)
            return false;
        if(helper(s,t) and s->val == t->val)
        {
            return isSubtree(s->left, t->left) and isSubtree(s->right, t->right);
        }
        else
        {
            return isSubtree(s->left, t) or isSubtree(s->right, t);
        }
            return isSubtree(s->left, t) or isSubtree(s->right, t);
    }
    bool helper(TreeNode * s, TreeNode* t){
        if(!s and !t)
            return true;
        else if(!s or !t)
            return false;
        return helper(s->left, t->left) and helper(s->right, t->right);
    }
};
// @lc code=end

