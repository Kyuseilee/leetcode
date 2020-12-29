/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>com;
        for(auto ch : nums){
            com[ch] += 1;
        }
        int sum = 0;
        for(auto item : com){
            int count = item.second;
            sum += count*(count-1)/2;
        }
        return sum;
    }
};
// @lc code=end

