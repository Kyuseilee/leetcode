/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(nums.size() < 2)
            return false;
        int pos = 0;
        while(pos < nums.size()){
            long long tmpi = nums[pos];
            int j = pos+1;
            for(j = pos+1; j-pos <= k and j < nums.size(); j++){
                long long tmpj = nums[j];
                if(abs(tmpi - tmpj) <= t)
                    return true;
            }
            pos = j-k;
        }
        return false;

    }
};
// @lc code=end

