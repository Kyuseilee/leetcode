/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
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
    int countNodes(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        int count = 0;
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                count += 1;
                TreeNode* node = que.front();
                que.pop();
                if(node->left)
                que.push(node->left);
                if(node->right)
                que.push(node->right);
            }
        }
        return count;
    }
};
// @lc code=end

