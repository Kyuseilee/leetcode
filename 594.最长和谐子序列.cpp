/*
 * @lc app=leetcode.cn id=594 lang=cpp
 *
 * [594] 最长和谐子序列
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> res;
        int max_count = 0;
        for(auto num : nums){
            res[num] += 1;
        }
        for(auto item : res){
            if(res.count(item.first+1))
            {
                max_count = max(max_count, item.second + res[item.first+1]);
            }
        }
        return max_count;
}
};
// @lc code=end

