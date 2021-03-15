/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        vector<vector<int>>dp(nums.size(), vector<int>(2, 1));
        dp[0][0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                dp[i][0] = 0;
                dp[i][1] = 0;
                continue;
            }
            dp[i][0] = max(dp[i-1][0]*nums[i], max(dp[i-1][1]*nums[i], nums[i]));
            dp[i][1] = min(dp[i-1][0]*nums[i], min(dp[i-1][1]*nums[i], nums[i])); 
        }
        int max_val = INT_MIN;
        for(int i = 0; i < dp.size(); i++)
        {
            max_val = max(dp[i][0], max_val);
        }
        return max_val;
    }
};
// @lc code=end

