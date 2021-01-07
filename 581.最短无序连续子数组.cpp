/*
 * @lc app=leetcode.cn id=581 lang=cpp
 *
 * [581] 最短无序连续子数组
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        vector<int>com = nums;
        sort(com.begin(), com.end());
        while(start < end and com[start] == nums[start])
            start++;
        while(start < end and com[end] == nums[end])
            end--;
        
        return start == end ? 0 : end - start + 1;
    }
};
// @lc code=end

