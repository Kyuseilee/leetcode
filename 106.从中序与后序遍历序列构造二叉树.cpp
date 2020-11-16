/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(postorder, inorder);
        
    }
    TreeNode* helper(vector<int>&postorder, vector<int>&inorder){
        if(postorder.empty() or inorder.empty())
            return nullptr;
        int n = postorder.size();
        TreeNode* root = new TreeNode(postorder[n-1]);
        vector<int> lpart, rpart;
        int flag = 0;
        for(int i = 0; i < postorder.size(); i++){
            if(inorder[i] == root->val)
            {
                flag = i;
                break;
            }
            lpart.push_back(inorder[i]);
        }
        for(int i = flag+1; i<postorder.size(); i++){
            rpart.push_back(inorder[i]);
        }

        vector<int>lpre, rpre;
        for(int i = 0; i < flag; i++){
            lpre.push_back(postorder[i]);
        }
        for(int i = flag; postorder[i] != root->val; i++){
            rpre.push_back(postorder[i]);
        }
        root->left = helper(lpre,lpart);
        root->right = helper(rpre, rpart);
        return root;
        
    }
};
// @lc code=end

