/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, char>maps;
        unordered_map<char, char>mapt;
        for(int i = 0; i < s.size(); i++){
            if(!maps[s[i]])
                maps[s[i]] = t[i];
            else if(maps[s[i]] != t[i])
                return false;
            if(!mapt[t[i]])
                mapt[t[i]] = s[i];
            else if(mapt[t[i]] != s[i])
                return false;
        }
        return true;
    }
};
// @lc code=end

