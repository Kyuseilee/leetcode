/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>map;
        unordered_map<string, char> rmap;
        stringstream ss(s);
        string str;
        for(char c: pattern){
            if(!(ss >> str) || (map.count(c) == 1 and map[c] != str)or (rmap.count(str) == 1 and rmap[str] != c))
                return false;
            map[c] = str; rmap[str] = c;
        }
        return (ss >> s) ? false : true;

    }
};
// @lc code=end

