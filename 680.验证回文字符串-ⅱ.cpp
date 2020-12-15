/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文字符串 Ⅱ
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0, end = s.size()-1;
        string res = "";
        while(start < end){
            if(s[start] != s[end])
            {
                res = s;
                res.erase(res.find(s[end]), 1);
                break;
            }
            start++;
            end--;
        }
        if(!res.empty())
        {
            res += res;
            string tmp = res;
            reverse(res.begin(), res.end());
            return tmp == res;
        }
        return true;
            
    }
};
// @lc code=end

