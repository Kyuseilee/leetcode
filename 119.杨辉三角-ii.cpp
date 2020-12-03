/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0)
            return {1};
        vector<int> tmp;
        vector<int> res;
        res.push_back({1});
        for(int row = 1; row <= rowIndex; row++){
            tmp.push_back(1);
            for(int i = 1; i <= row-1; i++){
                tmp.push_back(res[i] + res[i-1]);
            }
            tmp.push_back(1);
            res = tmp;
            tmp.clear();
    }
    return res;
    }
};
// @lc code=end

