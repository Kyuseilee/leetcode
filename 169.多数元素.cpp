/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        int majority = 0, cnt = 0;
        for(int num:nums){
            ++counts[num];
            if(counts[num] > cnt){
                majority = num;
                cnt = counts[num];
            }
        }
        return majority;
    }
};
// @lc code=end

