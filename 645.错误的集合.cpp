/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> com;
        int rep;
        for(auto num : nums){
            if(com.count(num))
                rep = num;
            com[num] += 1;
        }
        for(int i = 1; i <= nums.size(); i++){
            if(!com.count(i))
                return {rep, i};
        }
        return {};
    }
};
// @lc code=end

