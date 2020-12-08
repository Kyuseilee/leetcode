/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pointer = 0;
        for(int i = 0; i < nums.size(); i++){
            if (pointer != nums[i])
                return pointer;
            pointer++;
        }
        return nums.size();
        //--------------------------------------
        int sum = (nums.size()*(nums.size() + 1))/2;
        for(int i = 0; i < nums.size(); i++){
            sum -= nums[i];
        }
        return sum;



    }
};
// @lc code=end

