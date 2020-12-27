/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<int> com;
    vector<vector<int>> permute(vector<int>& nums) {
        res.clear();
        tmp.clear();
        vector<bool> used(nums.size(), false);
        backtracking(nums, used);
        return res;
    }
    void backtracking(vector<int>&nums, vector<bool> &used){
        if(tmp.size() == nums.size()){
            res.push_back(tmp);
            return ;
        }
        for(int i = 0; i < nums.size(); i++){
            if(used[i] == true)
                continue;
            tmp.push_back(nums[i]);
            used[i] = true;
            backtracking(nums, used);
            tmp.pop_back();
            used[i] = false;
        }
    }
};
// @lc code=end

