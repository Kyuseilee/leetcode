/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        sort(nums.begin(), nums.end());
        int start = 0;
        while(start + 1 < nums.size()){
            if(nums[start+1] - nums[start] <= t)
                return true;
        }
        return false;

    }
};
// @lc code=end

