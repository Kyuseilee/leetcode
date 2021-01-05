/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int i = size-2;
        int j;
        while(i >= 0 and nums[i] >= nums[i+1]){
            i--;
        }
        if(i < 0)
        {
            sort(nums.begin(), nums.end());
            return ;
        }
        for(int j = size-1; j > i; j--)
        {
            if(nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                sort(nums.begin() + i+1, nums.end());
                break;
            }
        }
        return ;
    }
};
// @lc code=end

