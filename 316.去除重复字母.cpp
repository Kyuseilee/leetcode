/*
 * @lc app=leetcode.cn id=316 lang=cpp
 *
 * [316] 去除重复字母
 */

// @lc code=start
class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int>cmp;
        for(int i = 0; i < s.size(); i++){
            cmp[s[i]] += 1;
        }
        string res = "";
        for(int i = 0; i < s.size(); i++){
            if(cmp[s[i]] == 0)
                continue;
            else if(cmp[s[i]] == 1)
            {
                res += s[i];
            }
            else if(i+1 < s.size() and s[i+1] > s[i]){
                res += s[i];
            }
            else{
                cmp[s[i]]--;
            }
        }
        return res;
    }
};
// @lc code=end

