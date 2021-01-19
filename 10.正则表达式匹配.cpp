/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        int pos = 0;
        int left = 0;
        while(pos < p.size())
        {
            if(p[pos] == '.')
                left++;
            else if(p[pos] == '*')
            {
                while(pos+1 < p.size() and s[left] != p[pos+1])
                    pos++;
            }
                

        }
    }
};
// @lc code=end

