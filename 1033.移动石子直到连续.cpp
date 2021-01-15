/*
 * @lc app=leetcode.cn id=1033 lang=cpp
 *
 * [1033] 移动石子直到连续
 */

// @lc code=start
class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>pos{a, b, c};
        sort(pos.begin(), pos.end());
        

        int left = pos[1] - pos[0];
        int right = pos[2] - pos[1];
        
        int min = 0;
        if(left == 1 and right == 1)
            return {0, 0};
        else if(left == 1 or right == 1 or pos[1] + 1 == pos[2] -1 or pos[1]- 1 == pos[0] + 1)
            min = 1;
        else 
            min = 2;
        return vector<int>{min, left + right -2};
    }
};
// @lc code=end

