/*
 * @lc app=leetcode.cn id=1403 lang=cpp
 *
 * [1403] 非递增顺序的最小子序列
 */

// @lc code=start
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>res;
        int sum = 0;
        for(auto num : nums){
            sum += num;
        }
        int right = 0;
        for(int i = nums.size() -1; i >= 0; i--){
            if(right <= sum)
                res.push_back(nums[i]);
            else
            {
                break;
            }
            right += nums[i];
            sum -= nums[i];
        }
        return res;
    }
};
// @lc code=end

