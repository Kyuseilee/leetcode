/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int former = 0;
        int max_val = 0;
        for(int i = 1; i <nums.size(); i++){
            max_val = max(former + nums[i], max_val);
            former = nums[i-1];
        }
        return max_val;

    }
};
// @lc code=end

