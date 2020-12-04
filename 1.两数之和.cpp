/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map[target-nums[i]])
            {
                return {map[target - nums[i]]-1, i};
            }
            map[nums[i]] = i+1;
        }
        return {};
    }
};
// @lc code=end

