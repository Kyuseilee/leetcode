/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        string cur = "";
        string result = "";
        int pos = 0;
        cur += s[0];
        for(int i = 1; i < s.size(); i++){
            cur += s[i];
            string tmp = cur;
            reverse(tmp.begin(), tmp.end());
            if(tmp != cur){
                int size = cur.size();
                while(pos < i){
                    tmp.erase(tmp.end()-1);
                    string ttmp = tmp;
                    reverse(ttmp.begin(), ttmp.end());
                    pos++;
                    if(ttmp == tmp){
                        cur = tmp;
                        break;
                    }
                }
            }
            else{
                if(cur.size() > result.size())
                    result = cur;
            }
        }
        return result;
    }
};
// @lc code=end

