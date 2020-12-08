/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        string res = "";
        for(int i = 0; i < s.size(); i++){
            res = s[i] ^ t[i];
        }
        return char(res);


    }
};
// @lc code=end

