/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size() < k)
            return -1;
        double max_val = 0;
        double cur_val = 0;
        if(k == 1)
        {
            sort(nums.begin(), nums.end());
            return nums[nums.size() -1];
        }
        else if(k == 2){
            for(int i = 0; i < nums.size() - 1; i++){
                cur_val = nums[i] + nums[i+1];
                max_val = max(max_val, cur_val);
            }
            max_val /= k;
        }
        else 
        {
            for(int i = 0; i < k; i++)
                cur_val += nums[i];
            for(int i = 1; i < nums.size() - k+1; i++){
                max_val = max(cur_val, max_val);
                cur_val = cur_val - nums[i-1] + nums[i+k-1];
            }
            max_val = max(cur_val, max_val);
            max_val /= k;
        }
        return max_val;

    }
};
// @lc code=end

