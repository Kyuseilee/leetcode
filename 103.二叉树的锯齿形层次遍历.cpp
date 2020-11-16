/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层次遍历
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
    queue<TreeNode*> que;
    vector<int>stk;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        int layer = 0;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = que.front();
                que.pop();
                if(!node) continue;
                stk.push_back(node->val);
                que.push(node->left);
                que.push(node->right);
            }
            if(!stk.empty()){
                if(layer %2 == 1)//判断锯齿层
                    reverse(stk.begin(), stk.end());
                res.push_back(stk);
                layer += 1;
            }
            stk.clear();
        }
        return res;

    }
};
// @lc code=end

