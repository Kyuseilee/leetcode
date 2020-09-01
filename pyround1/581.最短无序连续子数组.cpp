/*
 * @lc app=leetcode.cn id=581 lang=cpp
 *
 * [581] 最短无序连续子数组
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int m = nums[0], n = nums.back(), l = -1, r = -2;

        int len = nums.size();

        for(int i = 1; i < len; i++)
        {
            m = max(m, nums[i]);
            n = min(n, nums[len - 1 - i]);
            if(m != nums[i]) r = i;
            if(n != nums[len - 1 - i]) l = len - i - 1;
        }
        return r - l + 1;
    }
};
// @lc code=end

