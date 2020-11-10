/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        if(nums.empty()) return nums;
        for(int i = 0; i < nums.size(); i++)
        {
            int index = (nums[i] - 1) % nums.size();
            nums[index] += nums.size();
        }
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] <= nums.size())
                res.push_back(i+1);
        }
        return res;

    }
};
// @lc code=end

