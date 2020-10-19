/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto unique_end = unique(nums.begin(), nums.end());
        nums.erase(unique_end, nums.end());
        return nums.size();

    }
};
// @lc code=end

