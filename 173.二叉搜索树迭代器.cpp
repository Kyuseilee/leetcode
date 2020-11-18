/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
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
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        helper(root, root->left);
        helper(root->right, root);


    }
    void helper(TreeNode* root, TreeNode* former){
        if(!root)
            return ;
        former->next = root;
        former = root;
        if(root->left)
        helper(root->left, former);
        if(root->right)
        helper(root->right, former);
        
    }
    
    /** @return the next smallest number */
    int next(TreeNode* root) {
        return Node->next;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext(TreeNode* Node) {
        return Node->next != nullptr;

    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

