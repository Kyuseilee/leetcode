/*
 * @lc app=leetcode.cn id=213 lang=cpp
 *
 * [213] 打家劫舍 II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        int result1 = rangeRob(nums, 0, nums.size()-2);
        int result2 = rangeRob(nums, 1, nums.size()-1);
        return max(result1, result2);
    }
    int rangeRob(vector<int>nums, int start, int end)
    {
        if(end == start)
            return nums[start];
        vector<int>dp(nums.size(), 0);
        dp[start] = nums[start];
        dp[start+1] = max(nums[start], nums[start+1]);
        for(int i = start+2; i <= end; i++)
        {
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        }
        return dp[end];
    }
};
// @lc code=end

