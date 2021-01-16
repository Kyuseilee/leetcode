/*
 * @lc app=leetcode.cn id=1351 lang=cpp
 *
 * [1351] 统计有序矩阵中的负数
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(auto vec : grid)
        {
            for(auto ch : vec)
            {
                if(ch < 0)
                    count++;
            }
        }
        return count;
    }
};
// @lc code=end

