/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty())
            return 0;
        int min_length = INT_MAX;
        int start = 0, end = 0;
        int sum = 0;
        while(end < nums.size()){
            sum += nums[end];
            while(sum >= s)
            {
                min_length = min(min_length, end-start+1);
                sum -= nums[start];
                start++;
            }
            end++;
        }
        return min_length == INT_MAX? 0 :min_length;

    }
};
// @lc code=end

