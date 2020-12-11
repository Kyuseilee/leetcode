/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string tmp = "";
        for(int i = 0; i < s.size(); i++){
            if(isspace(s[i])){
                reverse(tmp.begin(), tmp.end());
                res += tmp ;
                res += " ";
                tmp = "";
            }
            else
            tmp += s[i];
        }
        reverse(tmp.begin(), tmp.end());
        res += tmp;
        return res;


    }
};
// @lc code=end

