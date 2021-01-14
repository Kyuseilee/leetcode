/*
 * @lc app=leetcode.cn id=402 lang=cpp
 *
 * [402] 移掉K位数字
 */

// @lc code=start
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() <= k)
            return "0";
        string res = "";

        int pos = 1;
        while(pos < num.size() and num[pos] == '0')
        {
            pos++;
        }
        if(pos == num.size())
            return "0";
        if(pos == 1){
            pos = 0;
        }
        else{
            k -= 1;
        }
    }
};
// @lc code=end

