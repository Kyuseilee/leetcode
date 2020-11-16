/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(0, nums.size()-1, nums);
    }
    TreeNode* helper(int l, int r, vector<int>&nums){
        if(l > r)
            return nullptr;
        int mid = (l+r) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(l, mid-1, nums);
        root->right = helper(mid+1, r, nums);
        return root;
    }
};
// @lc code=end

