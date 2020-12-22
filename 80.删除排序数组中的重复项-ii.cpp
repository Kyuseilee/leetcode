/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;
        if(nums.size() == 1)
            return 1;
        int count = 1;
        int k = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[k])
            {
                if(count < 2)
                {
                    nums[++k] = nums[i];
                    count++;
                }
            }
            else
            {
                nums[++k] = nums[i];
                count = 1;
            }
        }
        return k+1;
    }
};
// @lc code=end

