/*
 * @lc app=leetcode.cn id=1470 lang=cpp
 *
 * [1470] 重新排列数组
 */

// @lc code=start
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int start = 0;
        while(start < n){
            res.push_back(nums[start]);
            res.push_back(nums[start+n]);
            start++;
        }
        return res;
    }
};
// @lc code=end

