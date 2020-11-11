/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty())
            return {-1, -1};
        int firstPosition = findFirstPosition(nums, target);
        if (firstPosition == -1)
            return {-1, -1};
        int lastPosition = FindLastPosition(nums, target);
        return vector<int>{firstPosition, lastPosition};
    }
private:
    int findFirstPosition(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target)
                right = mid - 1;
            else if (nums[mid] < target)
                left = mid + 1;
            else
            {
                right = mid - 1;
            }
        }
        if(left != nums.size() and nums[left] == target){
            return left;
        }
        return -1;
    }
    int FindLastPosition(vector<int> &nums, int target){
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target)
                left = mid + 1;
            else if(nums[mid] < target)
                left = mid + 1;
            else
            {
                right = mid - 1;
            }
        }
            return right;
    }
};
// @lc code=end

