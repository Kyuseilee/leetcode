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
    unordered_map<int, TreeNode*> fa;
    unordered_map<int, bool> vis;
    void dfs(TreeNode* root){
        if(root->left!=nullptr){
            fa[root->left->val] = root;
            dfs(root->left);
        }
        if(root->right != nullptr){
            fa[root->right->val] = root;
            dfs(root->right);
        }

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fa[root->val] == nullptr;
        dfs(root);
        while(q!=nullptr){
            vis[q->val] = true;
            q = fa[q->val];
        }
        while(p!= nullptr){
            if(vis[p->val]) return p;
            p = fa[p->val];
        }
        return nullptr;
    }
};
// @lc code=end

