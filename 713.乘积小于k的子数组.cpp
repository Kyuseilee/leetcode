/*
 * @lc app=leetcode.cn id=713 lang=cpp
 *
 * [713] 乘积小于K的子数组
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= k)
                continue;
            int start = i+1;
            int total = nums[i];
            count++;
            while(start < nums.size() and total*nums[start] <k)
            {
                total *= nums[start];
                start++;
                count++;
            }
            cout << i << " " << count<<"\n";
        }
        return count;

    }
};
// @lc code=end

