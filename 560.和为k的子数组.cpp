/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为K的子数组
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    int subarraySum(vector<int>& nums, int k) {
        res.clear();
        tmp.clear();
        helper(0, nums, 0, k);
        return res.size();
    }
    void helper(int sum, vector<int>& nums, int index, int k){
        if(sum == k)
        {
            res.push_back(tmp);
            return ;
        }
        for(int i = index; i < nums.size(); i++){
            sum += nums[i];
            tmp.push_back(nums[i]);
            helper(sum, nums, i+1, k);
            sum -= nums[i];
            tmp.pop_back();
        }
    }
};
// @lc code=end

