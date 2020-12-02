/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>dic;
        dic['I'] = 1;
        dic['V'] = 5;
        dic['X'] = 10;
        dic['L'] = 50;
        dic['C'] = 100;
        dic['D'] = 500;
        dic['M'] = 1000;
        int result = 0;
        for(int i = 0; i < s.length(); i++){
            if(dic[s[i]] < dic[s[i+1]])
                result -= dic[s[i]];
            else
            {
                result += dic[s[i]];
            }
        }
        return result;


    }
};
// @lc code=end

