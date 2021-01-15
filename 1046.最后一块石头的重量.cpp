/*
 * @lc app=leetcode.cn id=1046 lang=cpp
 *
 * [1046] 最后一块石头的重量
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int size = stones.size();
        while(size > 1){
            sort(stones.begin(), stones.end());
            int left = stones[size-1];
            int right = stones[size-2];
            stones.pop_back();
            stones.pop_back();
            int val = abs(left -right);
            stones.push_back(val);
            size = stones.size();
        }
        if(stones.empty())
            return 0;
        return stones[0];
    }
};
// @lc code=end

