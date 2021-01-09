/*
 * @lc app=leetcode.cn id=713 lang=cpp
 *
 * [713] 乘积小于K的子数组
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start = nums.size()-1;
        int sum = 1;
        int count = 0;
        while(start >= 0){
            if(nums[start] < k)
            {
                sum = nums[start];
                count += 1;
            }
            else{
                start--;
                continue;
            }
            int pos = start-1;
            while(pos >= 0){
                while(pos >= 0 and nums[pos] == 1)
                {
                    count++;
                    pos--;
                    continue;
                }
                if(pos >= 0 and sum*nums[pos] < k)
                {
                    sum *= nums[pos];
                    count++;
                    pos--;
                }
                else{
                    break;
                }
            }
            start--;
        }
        return count;
    }
};
// @lc code=end

