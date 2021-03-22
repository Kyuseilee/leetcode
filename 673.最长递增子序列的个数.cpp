/*
 * @lc app=leetcode.cn id=673 lang=cpp
 *
 * [673] 最长递增子序列的个数
 */

// @lc code=start
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(), 1);
        int maxCount = 1;
        vector<int>count(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]){
                    if(dp[i] < dp[j]+1){
                        count[i] = count[j];
                        dp[i] = dp[j]+1;
                    }
                    else if(dp[i] == dp[j]+1)
                        count[i] += count[j];
                }
                if(dp[i] > maxCount) maxCount = dp[i];
            }
        }
        int result = 0;
        for(int i = 0; i < dp.size(); i++){
            if(maxCount == dp[i]){
                result += count[i];
            }
        }
        return result;
    }
};
// @lc code=end

