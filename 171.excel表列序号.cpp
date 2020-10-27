/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for(auto ss:s){
            res = res * 26 + (ss - 'A'  +1);
        }
        return res;

    }
};
// @lc code=end

