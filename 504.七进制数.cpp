/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        if(abs(num) < 7)
            return to_string(num);
        bool flag = false;
        if(num < 0)
        {
            flag = true;
            num = -num;
        }
        string res = "";
        int count = 0;
        while(num){
            int pointer = pow(7, count+1);
            if(num / pointer >= pointer){
                res += to_string(num%pointer);
                num -= num % pointer;
                count++;
            }
            else{
                res += to_string(num/pointer);
                break;
            }
        }
        if(flag){
            res += "-";
        }
        reverse(res.begin(), res.end());
        return res;

    }
};
// @lc code=end

