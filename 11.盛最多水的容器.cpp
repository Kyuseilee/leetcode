/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_square = 0;
        while(left < right){
            if(height[left] < height[right])
            {
                max_square = max(max_square, (right - left)*height[left]);
                left++;
            }
            else
            {
                max_square = max(max_square, (right - left)*height[right]);
                right--;
            }
        }
        return max_square;
    }
};
// @lc code=end

