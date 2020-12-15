/*
 * @lc app=leetcode.cn id=674 lang=cpp
 *
 * [674] 最长连续递增序列
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int start = 0;
        if(nums.empty())
            return 0;
        int count = 1, max_count=0;
        while(start < nums.size()-1){
            if(nums[start+1] > nums[start]) 
                count++;
            else{
                max_count = max(max_count, count);
                count = 1;
            }
            start++;
        }
        return max(max_count, count);
    }
};
// @lc code=end

