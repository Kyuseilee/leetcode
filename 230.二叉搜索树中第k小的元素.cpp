/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第K小的元素
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
    int count = 0;
    int res = -1;
    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);
        return res;

    }
    void helper(TreeNode* root, int k){
        if(!root)
            return ;
        if(root->left){
            helper(root->left, k);
        }
        count += 1;
        if(count == k)
        {
            res = root->val;
            return ;
        }
        if(root->right)
            helper(root->right, k);
    }
};
// @lc code=end

