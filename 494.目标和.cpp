/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] 目标和
 */

// @lc code=start
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = 0;
        for(auto num : nums)
        {
            sum += num;
        }
        if((S > sum) or (sum + S)% 2 == 1)
            return 0;
        int target = (sum + S)/2;
        vector<int>dp(target+1, 0);
        dp[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = target; j >= nums[i]; j--)
            {
                dp[j] += dp[j-nums[i]];
            }
        } 
        return dp[target];
    }
};
// @lc code=end

