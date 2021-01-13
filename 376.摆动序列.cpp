/*
 * @lc app=leetcode.cn id=376 lang=cpp
 *
 * [376] 摆动序列
 */

// @lc code=start
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int pos = 0;
        if(nums.empty())
            return 0;
        while(pos < nums.size() and nums[pos] == nums[0]){
            pos++;
        }
        if(pos == nums.size()){
            return 1;
        }

        bool flag = nums[0] < nums[pos] ? false : true;
        
        int max_length = 1;
        int length = 1;
        int origin = pos;
        while(pos < nums.size()){
            if(!flag){
                if(nums[pos] <= nums[pos-1]){
                    max_length += pos - origin;
                    origin = pos+1;
                }
                else{
                    flag = true;
                }
            }
            else{
                if(nums[pos] >= nums[pos-1])
                {
                    max_length += pos - origin;
                    origin = pos+1;
                }
                else{
                    flag = false;
                }
            }
            pos++;
        }
        max_length += pos - origin;
        return max_length;
    }
};
// @lc code=end

