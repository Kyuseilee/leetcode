/*
 * @lc app=leetcode.cn id=1539 lang=cpp
 *
 * [1539] 第 k 个缺失的正整数
 */

// @lc code=start
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size();
        while(left < right){
            int mid = (left + right) / 2;
            if(arr[mid] - mid >= k+1)
                right = mid;
            else
            {
                left = mid+1;
            }
            
        }
        return k + left;

    }
};
// @lc code=end

