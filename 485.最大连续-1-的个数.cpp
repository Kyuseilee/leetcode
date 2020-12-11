/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1)
                count++;
            else{
                max_count = max(count, max_count);
                count = 0;
            }
        }
        return max(count, max_count);

    }
};
// @lc code=end

