/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;
        if(nums.size() == 1)
            return 1;
        int count = 1;
        int pos = nums.size();
        int i = 1;
        while(i < nums.size()){
            if(i+1 < nums.size() and nums[i] > nums[i+1])
                break;
            if(nums[i] == nums[i-1])
            {
                count++;
            }
            else{
                count = 1;
            }
            if(count > 2){
                int cur = i+1;
                while(nums[cur] == nums[i])
                    cur++;
                for(int j = cur; j < pos-1; j++){
                    swap(nums[cur], nums[cur+1]);
                    cur++;
                }
                pos--;
                if(pos < i)
                {
                    pos = i;
                    break;
                }
            }
            else{
                i++;
            }
        }
        return pos;
    }
};
// @lc code=end

