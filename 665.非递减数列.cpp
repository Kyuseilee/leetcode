/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() < 2)
            return true;
        bool flag = false;
        int max_val = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < max_val){
                if(flag)
                    return false;
                flag = true;
            }
            max_val = nums[i];
        }
        return true;

    }
};
// @lc code=end

