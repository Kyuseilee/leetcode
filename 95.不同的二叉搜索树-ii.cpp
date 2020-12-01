/*
 * @lc app=leetcode.cn id=95 lang=cpp
 *
 * [95] 不同的二叉搜索树 II
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
    vector<TreeNode*> generateTrees(int n) {
        if(!n)
            return {};
        return helper(1, n);
    }
    vector<TreeNode*> helper(int start, int end){
        {
            if(start > end)
                return {nullptr};
            vector<TreeNode*> alltree;
            for(int i = start; i <= end; i++){
                vector<TreeNode*> leftTrees = helper(start, i-1);
                vector<TreeNode*> rightTrees = helper(i+1, end);
                for(auto&left : leftTrees)
                {
                    for(auto& right : rightTrees){
                        TreeNode* root = new TreeNode(i);
                        root->left = left;
                        root->right = right;
                        alltree.push_back(root);
                    }
                }
            }
        return alltree;
        }
    }
};
// @lc code=end

