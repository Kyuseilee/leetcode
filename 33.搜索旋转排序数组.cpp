/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while(left < right){
            int mid = (left+right)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[left] > nums[right]){
                left = mid;
            }
            else{
                right = mid;
            }
            cout << left << " " << right << "\n";
        }
        return -1;
    }
};
// @lc code=end

