/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        unordered_map<char, int> map;
        for(char c: s) map[c] += 1;
        for(char c : t)
            if(--map[c] == -1) return false;
        return true;


    }
};
// @lc code=end

