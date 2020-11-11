/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        auto i = is_sorted_until(nums.rbegin(), nums.rend());
        if(i != nums.rend()){
            iter_swap(i, upper_bound(nums.rbegin(), i, *i));
        }
        reverse(nums.rbegin(), i);
        
    }
};
// @lc code=end

