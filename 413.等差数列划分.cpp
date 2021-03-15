/*
 * @lc app=leetcode.cn id=413 lang=cpp
 *
 * [413] 等差数列划分
 */

// @lc code=start
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int dp = 0, sum = 0;
        for(int i = 2; i < nums.size(); i++){
            if (nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
                dp = dp +1;
                sum += dp;
            }
            else {
                dp = 0;
            }
        }
        return sum;
        

    }
};
// @lc code=end

