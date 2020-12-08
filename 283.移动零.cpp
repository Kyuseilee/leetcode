/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty())
            return ;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0)
            {
                if(i + 1 >= nums.size())
                    break;
                int j = i+1;
                while(j+1 < nums.size() and nums[j] == 0)
                    j++;
                nums[i] = nums[j];
                nums[j] = 0;
            }
        }
        return ;
        
    }
};
// @lc code=end

