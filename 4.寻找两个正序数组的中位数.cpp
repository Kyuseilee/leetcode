/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> res;
        res.clear();
        int left = 0, right = 0;
        int size = nums1.size() + nums2.size();
        double first = 0, second = 0;
        while(left + right <= size/2 -1){
            if(nums1[left] < nums2[right]){
                left++;
            }
            else{
                right++;
            }
        }
        return right;
    }
};
// @lc code=end

