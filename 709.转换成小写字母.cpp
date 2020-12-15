/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string str) {
        string res = "";
        for(auto ch : str)
            res += tolower(ch);
        return res;

    }
};
// @lc code=end

