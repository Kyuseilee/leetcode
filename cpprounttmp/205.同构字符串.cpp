/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() == 0)
            return true;
        for(int index = 0; index <= s.size() - 1; index++){
            if(s.find(s[index])  != t.find(t[index]))
                return false;
        }
        return true;
    }
};
// @lc code=end

