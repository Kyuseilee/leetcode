/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int start = 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        while(start < s.size() and s[start] == t[start])
        {
            start++;
        }
        return t[start];
    }
};
// @lc code=end

