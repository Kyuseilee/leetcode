/*
 * @lc app=leetcode.cn id=513 lang=cpp
 *
 * [513] 找树左下角的值
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
    int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode*> que;
        if(!root)   return {};
        que.push(root);
        int lastnode = root->val;
        while(!que.empty()){
            int n = que.size();
            TreeNode* node = que.front();
            lastnode = node->val;
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->left)
                {
                    que.push(node->left);
                }
                if(node->right)
                    que.push(node->right);
            }
        }
        return lastnode;
    }
    
};
// @lc code=end

