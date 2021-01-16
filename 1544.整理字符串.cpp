/*
 * @lc app=leetcode.cn id=1544 lang=cpp
 *
 * [1544] 整理字符串
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {
        string res;
        for(auto ch : s)
        {
            if(!res.empty() and tolower(res.back()) == tolower(ch) and res.back() != ch)
                res.pop_back();
            else
            {
                res.push_back(ch);
            }
        }
        return res;
    }
};
// @lc code=end

