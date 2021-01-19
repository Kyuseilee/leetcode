/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        vector<string>rows(min(int(s.size()), numRows));
        string res = "";
        int curRows = 0;
        bool goingDown = false;
        for(auto ch : s)
        {
            rows[curRows] += ch;
            if(curRows == 0 or curRows == numRows-1)
                goingDown = !goingDown;
            curRows += goingDown? 1 : -1;
        }
        for(auto row : rows)
            res += row;
        return res;
    }
};
// @lc code=end

