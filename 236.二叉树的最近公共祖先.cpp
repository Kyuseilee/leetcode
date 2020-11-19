/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(isFather(p, q))
            return p;
        if(isFather(q, p))
            return q;
        TreeNode* father1 = findFather(root, p);
        TreeNode* father2 = findFather(root, q);
        while(father1->val != father2->val){
            if(isFather(father1, father2))
                return father1;
            if(isFather(father2, father1))
                return father2;
            father1 = findFather(root, father1);
            father2 = findFather(root, father2);
        }
        return father1;
        
    }
    bool isFather(TreeNode* father, TreeNode* son){
        return father->left == son or father->right == son;
    }
    TreeNode* findFather(TreeNode* root, TreeNode* cur){
        if(!root)
            return nullptr;
        if(cur == root)
            return cur;
        else if(isFather(root, cur))
            return root;
        if(root->left)
            return findFather(root->left, cur);
        if(root->right)
            return findFather(root->right, cur);
        else
        {
            return cur;
        }
        
    }
};
// @lc code=end

