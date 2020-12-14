/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cur_flag = nums[0];
        bool flag = false;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < cur_flag)
            {
                if(flag)
                    return false;
                flag = true;
            }
                cur_flag = nums[i];
            
        }
        return true;

    }
};
// @lc code=end

