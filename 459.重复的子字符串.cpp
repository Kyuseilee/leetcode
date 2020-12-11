/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    bool repeatedsubstringpattern(string s) {
        unordered_map<char, int> res;
        for(auto& ch : s){
            res[ch] += 1;
        }
        int val = res[s[0]];
        for(int i = 0; i < res.size(); i++){
            if(res[s[i]] != val)
                return false;
        }
        return true;

    }
};
// @lc code=end

