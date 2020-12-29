/*
 * @lc app=leetcode.cn id=1413 lang=cpp
 *
 * [1413] 逐步求和得到正数的最小值
 */

// @lc code=start
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int max_val = 1;
        int presum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(presum + nums[i] < 0)
                max_val = max(abs(presum + nums[i])+1, max_val);
            presum += nums[i];
        }
        return max_val;
    }
};
// @lc code=end

