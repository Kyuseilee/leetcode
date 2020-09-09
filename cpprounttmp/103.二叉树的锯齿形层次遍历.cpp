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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector <int>> res;
        if(!root) return res;

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int n = q.size();
            deque<int> temp;
            for(int i = 1; i <= n; i++){
                auto node = q.front();q.pop();
                if(level % 2 == 0)
                    temp.push_back(node->val);
                else
                    temp.push_front(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(vector<int>(temp.begin(),temp.end()));
            level++;
        }
        return res;
    }
};
// @lc code=end

