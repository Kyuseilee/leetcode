/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        if (n == 2)
            return "11";
        string s = countAndSay(n-1);
        int count = 1;
        string res = "";
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
                count++;
            else{
                res += to_string(count)+s[i];
                count = 1;
            }
        }
        res += to_string(count)+s[s.size()-1];
        return res;


    }
};
// @lc code=end

