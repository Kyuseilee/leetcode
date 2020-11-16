/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder);

    }
    TreeNode* helper(vector<int>&preorder, vector<int>&inorder){
        if(preorder.empty() or inorder.empty())
            return nullptr;
        TreeNode* root = new TreeNode(preorder[0]);
        vector<int> lpart, rpart;
        int flag = 0;
        for(int i = 0; i < preorder.size(); i++){
            if(inorder[i] == root->val)
            {
                flag = i;
                break;
            }
            lpart.push_back(inorder[i]);
        }
        for(int i = flag+1; i < preorder.size(); i++){
            rpart.push_back(inorder[i]);
        }

        vector<int>lpre, rpre;
        for(int i = 1; i < flag+1; i++){
            lpre.push_back(preorder[i]);
        }
        for(int i = flag+1; i < preorder.size(); i++){
            rpre.push_back(preorder[i]);
        }
        root->left = helper(lpre,lpart);
        root->right = helper(rpre, rpart);
        return root;
        
    }
};
// @lc code=end

