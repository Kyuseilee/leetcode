/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        return helper(root, root);
    }
    //递归
    // bool helper(TreeNode* lnode, TreeNode* rnode){
    //     if(lnode == nullptr and rnode == nullptr)
    //         return true;
    //     else if (lnode == nullptr or rnode == nullptr)
    //         return false;
    //     else if(lnode->val == rnode->val)
    //         return(helper(lnode->left, rnode->right) and helper(lnode->right, rnode->left));
    //     else
    //     {
    //         return false;
    //     }
        
    // }
    //迭代
    bool helper(TreeNode* lnode, TreeNode* rnode){
        queue<TreeNode*> q;
        q.push(lnode);
        q.push(rnode);
        while(!q.empty()){
            lnode = q.front(); q.pop();
            rnode = q.front(); q.pop();
            if(!lnode and !rnode) continue;
            else if((!lnode || !rnode) or(lnode->val != rnode->val)) return false;
            
            q.push(lnode->left);
            q.push(rnode->right);
            q.push(lnode->right);
            q.push(rnode->left);

        }
        return true;
    }
    



};
// @lc code=end

