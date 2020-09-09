/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root == nullptr) return res;

        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            int len = q.size();
            vector<int> temp;
            for (int i = 0; i < len; i++){
                TreeNode* now = q.front();
                q.pop();
                temp.push_back(now->val);
                if(now->left != nullptr) q.push(now->left);
                if(now->right != nullptr) q.push(now->right);
            }
            res.insert(res.begin(), temp);
        }
        return res;
        
    }
};
// @lc code=end

