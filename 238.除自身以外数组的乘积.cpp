/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        int n = nums.size();
        vector<int>res(n, 1);
        res[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            res[i] = nums[i-1]*res[i-1];
        }
        int R = 1;
        for(int i = n-1; i >= 0; i--){
            res[i] = res[i] * R;
            R *= nums[i];
        }
        return res;

    }
};
// @lc code=end

