/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        string s = "";
        while(n){
            n -= 1;
            s += ('A' + (n%26));
            n /= 26;
        }
        reverse(s.begin(), s.end());
        return s;

    }
};
// @lc code=end

