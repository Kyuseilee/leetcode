/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 */

// @lc code=start
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto num : nums)
        {
            sum += num;
        }
        if(sum %2 == 1)
            return false;
        sum /= 2;
        vector<int>dp(10001, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = sum; j >= nums[i]; j--)
            {
                if(dp[sum] == sum)
                    return true;
                dp[j] = max(dp[j], dp[j-nums[i]] + nums[i]);
            }
        }
        return dp[sum] == sum;
    }
};
// @lc code=end

