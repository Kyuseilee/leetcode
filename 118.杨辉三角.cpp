/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0)
            return {};
    vector<int> tmp;
    vector<int> former;
    vector<vector<int>> res;
    res.push_back({1});
    for(int row = 1; row <= numRows-1; row++){
        tmp.push_back(1);
        for(int i = 1; i <= row-1; i++){
            tmp.push_back(res[row-1][i] + res[row-1][i-1]);
        }
        tmp.push_back(1);
        res.push_back(tmp);
        tmp.clear();
    }
    return res;
    }
};
// @lc code=end

