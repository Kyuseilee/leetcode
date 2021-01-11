/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string res = "";
        bool flag = false;
        if(num1.size() > num2.size())
        {
            swap(num1, num2);
        }
        while(num1.size() < num2.size()){
            num1.insert(0, "0");
        }
        for(int i = num1.size()-1; i >= 0; i--){
            int tmp = num1[i]-'0' + num2[i] - '0' + carry;
            if(tmp >= 10)
            {
                tmp -= 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            res += to_string(tmp);
        }
        if(carry)
            res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

