/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> dic;
        for(auto& ch : magazine)
        {
            dic[ch] += 1;
        }
        for(auto&ch : ransomNote)
        {
            dic[ch] -= 1;
            if(dic[ch] < 0)
                return false;
        }
        return true;

    }
};
// @lc code=end

