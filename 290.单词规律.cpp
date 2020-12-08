/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> res;
        string tmp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ')
                tmp += s[i];
            else{
                if(res[tmp])
                {
                    if(res[tmp] != tmp)
                        return false;
                }
                else{
                    res[tmp] = tmp;
                }
                tmp = "";
            }
        }
        return true;

    }
};
// @lc code=end

