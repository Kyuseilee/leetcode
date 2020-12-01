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
    stack<TreeNode*> res;
    BSTIterator(TreeNode* root) {
        helper(root);
    }
    void helper(TreeNode* root){
        while(root){
            res.emplace(root);
            root = root->left;
        }
    }
    /** @return the next smallest number */
    int next() {
        TreeNode* root =res.top();
        res.pop();
        helper(root->left);
        return root->val;
    }
        
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !res.empty();

    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

