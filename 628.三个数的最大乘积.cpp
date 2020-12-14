/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n < 3){
            return nums[n-1] * nums[n-1] * nums[n-1];
        }
        int right = nums[n-1] * nums[n-2] * nums[n-3];
        if(nums[0] < 0)
        {
            int left = nums[0] * nums[1] * nums[n-1];
            return max(right, left);
        }
        return right;

    }
};
// @lc code=end

