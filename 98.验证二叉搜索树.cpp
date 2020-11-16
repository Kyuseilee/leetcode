/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    vector<int> res;
    bool isValidBST(TreeNode* root) {
        res.clear();
        InOrderTraverse(root);
        for(int i = 1; i <res.size(); i++)
            if(res[i] <= res[i -1]) return false;
        return true;
        
    }
    void InOrderTraverse(TreeNode* root){
        if(root == nullptr)
            return ;
        InOrderTraverse(root->left);
        res.push_back(root->val);
        InOrderTraverse(root->right);
    }
};
// @lc code=end

