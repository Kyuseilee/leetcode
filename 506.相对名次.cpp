/*
 * @lc app=leetcode.cn id=506 lang=cpp
 *
 * [506] 相对名次
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res;
        res.push_back("Gold Medal");
        res.push_back("Silver Medal");
        res.push_back("Bronze Medal");
        for(int i = 3; i < nums.size() ;i++)
            res.push_back(to_string(i+1));
        return res;

    }
};
// @lc code=end

