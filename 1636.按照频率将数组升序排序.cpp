/*
 * @lc app=leetcode.cn id=1636 lang=cpp
 *
 * [1636] 按照频率将数组升序排序
 */

// @lc code=start
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>com;
        for(auto num : nums){
            com[num] += 1;
        }
        vector<int> res;
    }
};
// @lc code=end

