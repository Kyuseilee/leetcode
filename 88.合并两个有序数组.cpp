/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = nums1.size()-1; i >= m; i--){
            nums1[i] = nums2[n-1];
            n--;
        }
        sort(nums1.begin(), nums1.end());
        return;
    }
};
// @lc code=end

