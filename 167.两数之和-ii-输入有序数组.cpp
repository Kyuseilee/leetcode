/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < numbers.size(); i++){
            if(map[target-numbers[i]])
            {
                return {map[target - numbers[i]], i+1};
            }
            map[numbers[i]] = i+1;
        }
        return {};

    }
};
// @lc code=end

