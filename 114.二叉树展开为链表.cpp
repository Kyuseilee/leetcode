/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
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
    void flatten(TreeNode* root) {
        vector<TreeNode*> l;
        preOrderTraversal(root, l);
        int n = l.size();
        for(int i = 1; i < n; i++){
            TreeNode* prev = l.at(i-1), *curr = l.at(i);
            prev->left = nullptr;
            prev->right = curr;
        }
    }
    void preOrderTraversal(TreeNode* root, vector<TreeNode*> &l){
        if (root != nullptr) 
        {   
            l.push_back(root);
            preOrderTraversal(root->left, l);
            preOrderTraversal(root->right, l);
        }
    }
};
// @lc code=end

