/*
 * @lc app=leetcode.cn id=508 lang=cpp
 *
 * [508] 出现次数最多的子树元素和
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
    int dfs(unordered_map<int, int>& M, TreeNode* root){
        if(!root) return 0;
        int left = dfs(M, root->left);
        int right = dfs(M, root->right);
        int sum = left + right + root->val;
        M[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        unordered_map<int, int> M;
        dfs(M, root);
        int maxTime = 0;
        for(auto item:M) maxTime = max(maxTime, item.second);
        for(auto item:M)
            {if(item.second == maxTime) res.push_back(item.first);}
        return res;

    }
};
// @lc code=end

