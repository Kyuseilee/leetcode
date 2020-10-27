/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto c:s) if(isalnum(c)) str += tolower(c);
        for(int i = 0, m = str.size(); i < m / 2; ++i)
        {
            if(str[i] != str[m-1-i])
                return false;
        }
        return true;
    }
};
// @lc code=end

