/*
 * @lc app=leetcode.cn id=659 lang=cpp
 *
 * [659] 分割数组为连续子序列
 */

// @lc code=start
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int>cmp;
        for(auto num : nums){
            cmp[num] += 1;
        }
        for(int i = 0; i < nums.size(); i++){
            
        }

    }
};
// @lc code=end

