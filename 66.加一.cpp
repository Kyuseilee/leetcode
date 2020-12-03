/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int carry = 0;
        digits[0]  = digits[0] + 1;
        if(digits[0] > 9)
        {
            digits[0] = 0;
            carry = 1;
        }
        for(int i = 1; i < digits.size(); i++){
            digits[i] += carry;
            if(digits[i] > 9){
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                carry = 0;
                break;
            }
            
        }
        if(digits[digits.size()-1] == 0 and carry)
        {
            digits.push_back(1);
        }
        reverse(digits.begin(), digits.end());
        return digits;

    }
};
// @lc code=end

