/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();
        int current = 1;
        for(int i = 2; i < nums.size(); i++){
            if(nums[i] != nums[current-1])
            {
                current += 1;
                nums[current] = nums[i];
            }
        }
        return current +1;
    }
};
// @lc code=end

