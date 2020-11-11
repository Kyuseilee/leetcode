/*
 * @lc app=leetcode.cn id=655 lang=cpp
 *
 * [655] 输出二叉树
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
    vector<vector<string>> result;
    int getHeight(TreeNode* root){
        if (root == nullptr)
            return 0;
        return 1 + max(getHeight(root->left) , getHeight(root->right));
    }
    vector<vector<string>> printTree(TreeNode* root) {
        vector<string> vec;
        int depth = getHeight(root);
        int width = pow(2, depth) - 1;
        for(int i = 0; i < width; i++){
            vec.push_back("");
        }
        for(int j = 0; j < depth; j++){
            result.push_back(vec);
        }
        dfs(root, 0, 0, width);
        return result;
    }
    void dfs(TreeNode* root, int depth, int begin, int end){
        if(root == nullptr)
            return ;
        else
        {
            result[depth][(begin + end) / 2] = to_string(root->val);
        }
        dfs(root->left, depth+1, begin, (begin + end) / 2);
        dfs(root->right, depth + 1, (begin + end) / 2, end);
    }
};
// @lc code=end

