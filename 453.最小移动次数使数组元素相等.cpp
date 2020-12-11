/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            count += nums[i] - nums[0];
        }
        return count;

    }
};
// @lc code=end

