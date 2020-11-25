/*
 * @lc app=leetcode.cn id=654 lang=cpp
 *
 * [654] 最大二叉树
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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n = nums.size();
        TreeNode* root = buildTree(nums, 0, n-1);
        return root;
    }
    int Index(vector<int>&nums, int val){
        for(int i = 0; i <= nums.size() - 1; i++)
            if(nums[i] == val)
                return i;
        return -1;
    }
    TreeNode* buildTree(vector<int>&nums, int start, int end){
        int max_val =  *max_element(nums.begin() + start, nums.begin() + end+1);
        cout << start<< " " << end << " " <<max_val<<"\n";
        int max_val_index = Index(nums, max_val);
        TreeNode* root = new TreeNode(max_val);
        if(start > max_val_index -1)
            root->left = nullptr;
        else
            root->left = buildTree(nums,start, max_val_index -1);
        if(end <  max_val_index +1)
            root->right = nullptr;
        else 
            root->right = buildTree(nums, max_val_index +1, end);
        return root;
    }
};
// @lc code=end

