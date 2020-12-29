/*
 * @lc app=leetcode.cn id=1523 lang=cpp
 *
 * [1523] 在区间范围内统计奇数数目
 */

// @lc code=start
class Solution {
public:
    int countOdds(int low, int high) {
        int mid = (high - low) / 2;
        if(low % 2 == 1)
            mid += 1;
        else if(high % 2 == 1)
            mid += 1;
        return mid;
    }
};
// @lc code=end

