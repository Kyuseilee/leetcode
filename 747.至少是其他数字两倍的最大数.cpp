/*
 * @lc app=leetcode.cn id=747 lang=cpp
 *
 * [747] 至少是其他数字两倍的最大数
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map<int, int> res;
        int n = nums.size();
        if(n < 2 )
            return 0;
        for(int i = 0; i < n; i++){
            res[nums[i]] = i;
        }
        sort(nums.begin(), nums.end());
        if(nums[n-1] < 2*nums[n-2])
            return -1;
        return res[nums[n-1]];

    }
};
// @lc code=end

