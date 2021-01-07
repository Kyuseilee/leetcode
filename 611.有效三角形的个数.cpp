/*
 * @lc app=leetcode.cn id=611 lang=cpp
 *
 * [611] 有效三角形的个数
 */

// @lc code=start
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        int count = 0;
        sort(nums.begin(), nums.end());
        for(int i = nums.size() -1; i >= 0; i){
            if(nums[i] == 0)
                continue;
            int left = i+1, right = nums.size() -1;
            while(left < right){
                if(nums[i] + nums[left] > nums[right]){
                    count += right - left;
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return count;

    }
};
// @lc code=end

