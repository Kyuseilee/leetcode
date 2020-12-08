/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> res;
        for(int i = 0; i < nums.size(); i++){
            if(res[nums[i]])
                return true;
            res[nums[i]]++;
        }
        return false;

    }
};
// @lc code=end

