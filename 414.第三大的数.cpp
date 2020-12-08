/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() <3)
            return nums[nums.size() -1];
        int maxcount = 2;
        int val = nums[nums.size() -1];
        for(int i = nums.size()-2; i >= 0; i--){
            if(val != nums[i])
            {
                maxcount--;
                val = nums[i];
                if(maxcount == 0)
                    return val;
            }
        }
        if(maxcount)
            return nums[nums.size() -1];
        return val;

    }
};
// @lc code=end

