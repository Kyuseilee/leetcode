/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0) swap(nums1, nums2);
        else{
            int i = m - 1;
            int k = m + n - 1;

            for(int j = n - 1; j >= 0; j--){
                while(i >=0 and nums2[j] <= nums1[i]){
                    nums1[k--] = nums1[i--];
                }
                nums1[k--] = nums2[j];
            }
        }
        
    }
};
// @lc code=end

