/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        stack<int> stk;
        int val = 1;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0)
                val *= nums[i];
            else{
                stk.push(nums[i]);
                if(stk.size() == 2){
                    val *=stk.top();
                    stk.pop();
                }
                res.push_back(val);
            }
        }
    }
};
// @lc code=end

