/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<vector<int>> combine(int n, int k) {
        helper(1, n, k);
        return res;
    }
    void helper(int start, int n, int k){
        if(tmp.size() == k)
        {
            res.push_back(tmp);
            return ;
        }
        for(int i = start; i <= n; i++){
            tmp.push_back(i);
            helper(i+1, n, k);
            tmp.pop_back();
        }
    }
};
// @lc code=end

