/*
 * @lc app=leetcode.cn id=1646 lang=cpp
 *
 * [1646] 获取生成数组中的最大值
 */

// @lc code=start
class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n < 2)
            return n;
        int max_number = 0;
        vector<int> nums(n+1, 0);
        nums[1] = 1;
        nums[2] = 1;
        for(int i = 1; i < nums.size(); i++){
            if(2*i <= n)
                nums[2*i] = nums[i];
            if(2*i +1 <= n){
                nums[2*i+1] = nums[i] + nums[i+1];
            }
            max_number = max(max_number, nums[i]);
        }
        return max_number;

    }
};
// @lc code=end

