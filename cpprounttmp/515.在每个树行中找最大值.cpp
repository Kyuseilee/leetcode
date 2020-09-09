/*
 * @lc app=leetcode.cn id=515 lang=cpp
 *
 * [515] 在每个树行中找最大值
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
    vector<int> largestValues(TreeNode* root) {
        if (root == nullptr) return {};

        queue<TreeNode* > que;
        que.push(root);
        vector<int> vec;
        while(!que.empty()){
            int levelMax = INT_MIN;
            int len = que.size();
            for(int i =1; i <= len; i++){
                TreeNode* node = que.front();
                que.pop();
                levelMax = max(node->val, levelMax);
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            vec.push_back(levelMax);
        }
        return vec;
    }
};
// @lc code=end

