/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int end = nums.size();
        if(nums.empty())
            return 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                int j = i+1;
                while(j < nums.size() and nums[j] == val)
                    j++;
                if(j == nums.size())
                    return i;
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
        return nums.size();
    }
};
// @lc code=end

