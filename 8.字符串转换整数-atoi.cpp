/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        int i = 0,flag = 1;
        int res = 0; 
        while(str[i] == ' ') i++;
        if(str[i] == '-') flag = -1;
        if(str[i] == '-' || str[i] == '+') i++;
        for(; i < str.size() and isdigit(str[i]); i++){
            if(res > INT_MAX / 10 || (res == INT_MAX / 10 and str[i] - '0' > 7))
                return flag == 1? INT_MAX : INT_MIN;
            res = res * 10 + (str[i] - '0');
        }
        return flag * res;
    }
};
// @lc code=end

