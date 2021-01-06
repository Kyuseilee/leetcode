/*
 * @lc app=leetcode.cn id=442 lang=cpp
 *
 * [442] 数组中重复的数据
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        if(nums.empty())
            return {};
        for(int i = 0; i < n; i++){
            int index = (nums[i]-1)%n;
            nums[index] += n;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] > 2 * n){
                res.push_back(i+1);
            }
        }
        return res;
    }
};
// @lc code=end

