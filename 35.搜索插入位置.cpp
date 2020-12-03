/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size();
        if(target < nums[0])
            return 0;
        else if(target > nums[right-1])
            return right;
        int left = 0; 
        while(left < right){
            int mid = (left + right) /2;
            if(nums[mid] == target or (nums[mid] > target and nums[mid-1] < target))
                return mid;
            else if(nums[mid] > target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return right;

    }
};
// @lc code=end

