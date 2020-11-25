/*
 * @lc app=leetcode.cn id=671 lang=cpp
 *
 * [671] 二叉树中第二小的节点
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
    queue<TreeNode*> que;
    int findSecondMinimumValue(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        int min_first = root->val;
        int min_second = INT_MAX ;
        int flag = 0;
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->val > min_first)
                {
                    flag = 1;
                    min_second = min(min_second,node->val);
                }
                if(!node) continue;
                if(node->left)
                que.push(node->left);
                if(node->right)
                que.push(node->right);
            }
        }
        if(flag)
            return min_second;
        else
        {
            return -1;
        }
        
    }
};
// @lc code=end

