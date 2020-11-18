/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> res;
    vector<int>tmp;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        helper(root, 0, sum);
        return res;
    }
    void helper(TreeNode*root,int target, int sum){
        if(!root)
            return ;
        else if(root and !root->left and !root->right){
            target += root->val;
            tmp.push_back(root->val);
            if(target == sum)
                res.push_back(tmp);
        }
        else{
            target += root->val;
            tmp.push_back(root->val);
            helper(root->left, target, sum);
            helper(root->right, target, sum);
        }
        tmp.pop_back();
    }
};
// @lc code=end

