/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int size = nums.size();
        if(size == 1)
            return nums[0];
        int first = nums[0], second = max(nums[0], nums[1]);
        for(int i = 2; i < size; i++){
            int tmp = second;
            second = max(first + nums[i], second);
            first = tmp;
        }
        return second;

    }
};
// @lc code=end

