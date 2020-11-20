/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> result;
    unordered_map<long,int> res;
    vector<int> findMode(TreeNode* root) {
        helper(root);
        int max_count = 1;
        for(auto& c : res){
            cout << c.first << " " << c.second << " \n";
            if(max_count < c.second){
                result.clear();
                result.push_back(c.first);
                max_count = c.second;
            }
            else if(max_count == c.second)
                result.push_back(c.first);
            else
            {
                continue;
            }
        }
        return result;
    }
    void helper(TreeNode* root){
        if(!root)
            return ;
        if(root->left)
            helper(root->left);
        res[root->val] += 1;
        if(root->right)
            helper(root->right);
    }
};
// @lc code=end

