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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void inorder_traversal(TreeNode* node, vector<int>& nums){
        if(node == nullptr) return ;
        
        inorder_traversal(node->left, nums);
        nums.push_back(node->val);
        inorder_traversal(node->right, nums);

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder_traversal(root, nums);

        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int sum = nums.at(left) + nums.at(right);
            if (sum == k) return true;
            else if (sum > k) right--;
            else left++;
        }
        return false;

    }
};
// @lc code=end

