/*
 * @lc app=leetcode.cn id=623 lang=cpp
 *
 * [623] 在二叉树中增加一行
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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1){
            TreeNode* node = new TreeNode(v);
            node->left = root;
            return node;
        }
        return findtree(root, d, v, 1);
    }
    TreeNode* findtree(TreeNode* root, int d, int v, int cur_d){
        if(!root)
            return nullptr;
        if(d == cur_d+1)
        {
            TreeNode* toadd1 = new TreeNode(v);
            TreeNode* toadd2 = new TreeNode(v);
            toadd1->left = root->left;
            toadd2->right = root->right;
            root->left = toadd1;
            root->right = toadd2;
        }
        else{
            findtree(root->left, d, v, cur_d+1);
            findtree(root->right, d, v, cur_d+1);
        }
        return root;
    }
    
};
// @lc code=end

