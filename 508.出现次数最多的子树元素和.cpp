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
    vector<int> result;
    unordered_map<long,int> res;
        int sum = 0;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        int rt = helper(root);
        int max_count = 1;
        for(auto& c : res){
            cout << c.first << " " << c.second << " \n";
            if(max_count < c.second){
                result.clear();
                result.push_back(c.first);
                max_count = c.second;
            }
            else if(max_count == c.second)
            {
                result.push_back(c.first);
            }
            else
            {
                continue;
            }
        }
        return result;
    }
    int helper(TreeNode* root){
        if(!root)
            return 0;
        sum = root->val;
        sum = sum + helper(root->left) + helper(root->right);
        res[sum] += 1;
        return sum;
    }
};
// @lc code=end

