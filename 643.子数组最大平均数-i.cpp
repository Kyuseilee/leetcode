/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int pos = 0;
        double max_sum = INT_MIN;

        while(pos < k)
        {
            sum += nums[pos];
            pos++;
        }
        int former = nums[0];
        for(int i = pos; i < nums.size(); i++)
        {
            max_sum = max(sum, max_sum);
            sum -= former;
            sum += nums[i];
            former = nums[++pos-k];
        }
        return max(max_sum, sum) / k;
    }
};
// @lc code=end

