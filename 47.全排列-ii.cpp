/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        tmp.clear();
        res.clear();
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size(), false);
        backtracking(nums, used);
        return res;
    }
    void backtracking(const vector<int>&nums, vector<bool> used){
        if(tmp.size() == nums.size())
        {
            res.push_back(tmp);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(used[i] == true)
                continue;
            else if(i > 0 and used[i-1] == false and nums[i] == nums[i-1])
                continue;
            tmp.push_back(nums[i]);
            used[i] = true;
            backtracking(nums, used);
            used[i] = false;
            tmp.pop_back();
        }
    }
};
// @lc code=end

