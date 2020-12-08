/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty())
            return true;
        int start = 0;
        for(int i = 0; i < t.size(); i++){
            if(s[start] == t[i])
                start++;
            if(start == s.size())
                return true;
        }
        return false;
        

    }
};
// @lc code=end

