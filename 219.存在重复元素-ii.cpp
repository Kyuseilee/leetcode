/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> res;
        if(nums.size() < 2)
            return false;
        for(int i = 0; i < nums.size(); i++){
            if(res[nums[i]])
            {
                if(i + 1 - res[nums[i]] > k)
                    res[nums[i]] = i+1;
                else
                {
                    return true;
                }
            }
            else{
                res[nums[i]] = i + 1;
            }
        }
        return false;
    }
};
// @lc code=end

