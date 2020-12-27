/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        res.clear();
        tmp.clear();
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        for(int i = 0; i <= nums.size(); i++){
            backtracking(nums, i, 0,used);
        }
        return res;
    }
    void backtracking(vector<int>&nums, int cur_length, int start, vector<bool>&used){
        if(tmp.size() == cur_length){
            res.push_back(tmp);
            return ;
        }
        for(int i = start; i <nums.size(); i++){
            {
                if(i > 0 and nums[i] == nums[i-1] and used[i-1] == false)
                    continue;
                tmp.push_back(nums[i]);
                used[i] = true;
                backtracking(nums, cur_length, i+1, used);
                tmp.pop_back();
                used[i] = false;
            }
        }
    }
};
// @lc code=end

