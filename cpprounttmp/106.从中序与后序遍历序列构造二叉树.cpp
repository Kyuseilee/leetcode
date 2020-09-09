/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
    }
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int inorder_start, int inorder_end, int postorder_start, int postorder_end)
    {
        if(inorder_start > inorder_end || postorder_start > postorder_end) return nullptr;
        TreeNode* root = new TreeNode (postorder[postorder_end]);

        if(postorder_start == postorder_end) return root;

        int index = inorder_start;
        while(postorder[postorder_end] != inorder[index])
            index++;
        root->left = helper(inorder, postorder, inorder_start, index-1, postorder_start, postorder_start + (index - 1 - inorder_start));
        root->right = helper(inorder, postorder,index+1, inorder_end, postorder_end-1-(inorder_end - (index+1)), postorder_end-1);
        return root; 
    }
};
// @lc code=end

