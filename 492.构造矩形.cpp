/*
 * @lc app=leetcode.cn id=492 lang=cpp
 *
 * [492] 构造矩形
 */

// @lc code=start
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int sub = sqrt(area);
        while(area % sub != 0)
            sub--;
        return {area/sub, sub};

    }
};
// @lc code=end

