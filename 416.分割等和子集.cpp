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
        if(sum % 2 == 1)
            return false;
        sum /= 2;
        vector<int>dp(sum+1, 0);
        dp[0] = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = sum; j >= nums[i]; j--){
                dp[j] = max(dp[j], dp[j-nums[i]] + nums[i]);
            }
        }
        return dp[sum] == sum;
        







        // int sum = 0;
        // for(auto num : nums)
        // {
        //     sum += num;
        // }
        // if(sum % 2 == 1)
        //     return false;
        // vector<int>dp(10001, 0);
        // dp[0] = 0;
        // sum /= 2;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     for(int j = sum; j >= nums[i]; j--)
        //         dp[j] = max(dp[j], dp[j-nums[i]] + nums[i]);
        // }
        // return dp[sum] == sum;

    }
};
// @lc code=end

