/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 1;
        int endpos = nums.size()-1;
        int count = 1;
        int val = nums[0];
        while(start < endpos){
            if(nums[start] == val)
            {
                if(count == 2)
                {
                    int pos = start;
                    while(nums[pos] == val){
                        while(pos < endpos){
                            swap(nums[pos], nums[pos+1]);
                            pos++;
                        }
                        endpos = pos;
                        pos = start+1;
                    }
                }
                else
                    count++;
            }
            else{
                val = nums[start];
                count=1;
            }
            start++;
        }
        return endpos;
    }
};
// @lc code=end

