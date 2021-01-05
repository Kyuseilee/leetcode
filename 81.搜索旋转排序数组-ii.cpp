/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;

        while(left <= right){
            while(left != right and nums[left] == nums[right])
                right--;

            int mid = (left + right)/2;
            if(nums[mid] == target)
                return true;
            else if(nums[mid] > target){
                if(nums[mid] > nums[right] and target < nums[left])
                    left = mid+1;
                else
                {
                    right = mid-1;
                }
            }
            else{
                if(nums[mid] < nums[left] and target > nums[right])
                    right = mid-1;
                else
                {
                    left = mid+1;
                }
            }
        }
        return false;

        
    }
};
// @lc code=end

