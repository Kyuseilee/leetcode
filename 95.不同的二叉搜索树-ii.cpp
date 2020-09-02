/*
 * @lc app=leetcode.cn id=95 lang=cpp
 *
 * [95] 不同的二叉搜索树 II
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
    vector<TreeNode*> generateTrees(int start, int end) {
        if (start > end) return {nullptr};

        vector<TreeNode*> allTrees;

        for(int i = start; i <= end; i++)
        {
            vector<TreeNode*> leftTree = generateTrees(start, i-1);
            vector<TreeNode*> rightTree = generateTrees(i+1, end);

            for(auto&left: leftTree)
            {
                for (auto&right: rightTree){
                    TreeNode* curTree = new TreeNode(i);
                    curTree->left = left;
                    curTree->right = right;
                    allTrees.emplace_back(curTree);
                }
            }
        }
        return allTrees;
    }
    vector<TreeNode*> generateTrees(int n){
        if (!n) 
        return {};
    return generateTrees(1, n);
    }
};
// @lc code=end

