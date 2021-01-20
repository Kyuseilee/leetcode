/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = nums[0];
        vector<int>result = nums;
        result[0] = 1;
        for(int i = 1 ; i < nums.size(); i++)
        {
            result[i] = left;
            left *= nums[i];
        }
        int right = nums[nums.size()-1];
        for(int i = nums.size()-2; i >=0; i--)
        {
            result[i] *= right;
            right *= nums[i];
        }
        return result;
    }
};
// @lc code=end

