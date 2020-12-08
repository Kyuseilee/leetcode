/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        if(s.empty())
            return -1;
        unordered_map<char, int> res;
        for(auto& ch : s)
            res[ch] += 1;
        for(int i= 0; i < s.size(); i++){
            if(res[s[i]] == 1)
                return i;
        }
        return -1;

        //-------------------
        for(int i = 0; i < s.size(); i++)
            if(s.find(s[i]) == s.rfind(s[i]))
                return i;
        return -1;
    }
};
// @lc code=end

