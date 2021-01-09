/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.empty())
            return 1;
        int pos = 0;
        sort(nums.begin(), nums.end());
        while(nums[pos] <= 0)
        {
            pos++;
            if(pos >= nums.size())
                return 1;
        }
        int start =1 ;
        while(pos <nums.size()){
            if(start < nums[pos])
            {
                break;
            }
            else{
                while(pos+1 < nums.size() and nums[pos+1] == nums[pos])
                    pos++;
                start++;
            }
            pos++;
        }
        return start;

    }
};
// @lc code=end

