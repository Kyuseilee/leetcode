/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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
    queue<TreeNode*> que;
    vector<double>res;
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            double sum = 0;
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                sum += node->val;
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
            sum /= n;
            res.push_back(sum);
        }
        return res;
    }
};
// @lc code=end

