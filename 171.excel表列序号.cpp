/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        reverse(s.begin(), s.end());
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            sum += (s[i] - 'A' + 1)*pow(26, i);
        }
        return sum;

    }
};
// @lc code=end

