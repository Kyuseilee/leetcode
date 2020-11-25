/*
 * @lc app=leetcode.cn id=662 lang=cpp
 *
 * [662] 二叉树最大宽度
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
    unordered_map<TreeNode*, unsigned int> res;
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)   return {};
        que.push(root);
        int max_width = 0;
        res[root] = 1;
        while(!que.empty()){
            int n = que.size();
            int count = 0;
            int start = res[que.front()];
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(!node)
                    continue;
                else
                {
                    count = res[node] - start+1;
                }
                
                if(node->left)
                {
                    res[node->left] = 2*res[node];
                    que.push(node->left);
                }
                if(node->right)
                {
                    res[node->right] = 2*res[node]+1;
                    que.push(node->right);
                }
            }
            max_width = max(max_width, count);
        }
        return max_width;
    }
};
// @lc code=end

