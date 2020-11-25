/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入 BST
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
    vector<int>res;
    bool findTarget(TreeNode* root, int k) {
        helper(root);
        int size = res.size();
        if(size < 2)
            return false;
        if(res[size-1] + res[size-2] < k)
            return false;
        int l = 0;
        while(l < size-1){
            if(res[l] + res[size-1] > k)
                size--;
            else if(res[l] + res[size-1] < k)
                l++;
            else
            {
                return true;
            }
        }
        return false;
    }
    void helper(TreeNode* root){
        if(!root)
            return ;
        if(root->left)
            helper(root->left);
        res.push_back(root->val);
        if(root->right)
            helper(root->right);
    }
};
// @lc code=end

