/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为K的子数组
 */

// @lc code=start
class Solution {
public:
    int count = 0;
    int sum = 0;
    int subarraySum(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j >= 0; j--){
                sum += nums[j];
                if(sum == k)
                    count++;
            }
        }
        return count;
    }
};
// @lc code=end

