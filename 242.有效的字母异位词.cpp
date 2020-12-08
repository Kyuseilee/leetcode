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
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s== t;
        unordered_map<char, int> res;
        for(char ch : s)
            res[ch] += 1;
        for(char ch : t)
        {
            if(res[ch])
                res[ch]--;
            else{
                return false;
            }

        }
        return true;
        

    }
};
// @lc code=end

