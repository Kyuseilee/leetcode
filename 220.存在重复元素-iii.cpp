/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<int>vec;
        for(int i = 0; i < k+1; i++)
        {
            vec.push_back(nums[i]);
        }


        return false;

    }
};
// @lc code=end

