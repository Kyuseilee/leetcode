/*
 * @lc app=leetcode.cn id=852 lang=cpp
 *
 * [852] 山脉数组的峰顶索引
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max_val = *max_element(arr.begin(), arr.end());
        return find(arr.begin(), arr.end(), max_val) - arr.begin();
    }
};
// @lc code=end

