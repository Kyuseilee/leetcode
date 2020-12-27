/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        tmp.clear();
        for(int i = 0; i <= nums.size(); i++){
            backtracking(nums, i, 0);
        }
        return res;
    }
    void backtracking(vector<int>&nums, int cur_length, int start){
        if(tmp.size() == cur_length){
            res.push_back(tmp);
            return ;
        }
        for(int i = start; i <nums.size(); i++){
            {
                tmp.push_back(nums[i]);
                backtracking(nums, cur_length, i+1);
                tmp.pop_back();
            }
        }
    }
};
// @lc code=end

